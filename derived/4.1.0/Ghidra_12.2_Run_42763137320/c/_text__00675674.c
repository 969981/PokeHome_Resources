/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00675674; name: FUN_.text__00675674
 */


undefined8 FUN__text__00675674(long *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_40;
  char *local_38;
  long local_30;
  long local_28;
  
  lVar5 = *param_1;
  if (((*(ushort *)(lVar5 + 0x15a4) >> 9 & 1) == 0) || (*(long *)(lVar5 + 0x14f0) == 0)) {
    *(undefined8 *)(lVar5 + 0xf8) = 0xffffffffffffffff;
    return 0;
  }
  local_28 = 0;
  local_38 = (char *)0x0;
  local_30 = 0;
  local_40 = 0;
  iVar2 = FUN__text__0066c5d8(*(long *)(lVar5 + 0x14f0),&local_38,0,&local_28);
  if (iVar2 != 1) {
    cVar1 = *local_38;
    while ((cVar1 != '\0' &&
           ((iVar3 = FUN__text__0065680c(cVar1), iVar3 != 0 || (*local_38 == '-'))))) {
      cVar1 = local_38[1];
      local_38 = local_38 + 1;
    }
    uVar4 = FUN__text__0066c5d8(local_38,&local_40,0,&local_30);
    iVar3 = (int)uVar4;
    if (iVar3 != 1) {
      if ((iVar2 == 0) && (iVar3 == 2)) {
        uVar4 = 0;
      }
      else {
        if ((iVar2 != 2) || (iVar3 != 0)) {
          if (local_30 < local_28) {
            return 0x21;
          }
          if (local_30 - local_28 == 0x7fffffffffffffff) {
            return 0x21;
          }
          *(long *)(lVar5 + 0x14f8) = local_28;
          *(long *)(lVar5 + 0xf8) = (local_30 - local_28) + 1;
          return 0;
        }
        *(long *)(lVar5 + 0xf8) = local_30;
        local_28 = -local_30;
      }
      *(long *)(lVar5 + 0x14f8) = local_28;
      return uVar4;
    }
  }
  return 0x21;
}


