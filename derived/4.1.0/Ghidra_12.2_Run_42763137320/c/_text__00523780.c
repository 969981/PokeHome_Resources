/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00523780; name: FUN_.text__00523780
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00523780(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long local_40;
  undefined4 local_38;
  float local_34;
  
  if ((param_2 & 1) == 0) {
    if ((*(char *)(param_1 + 0xc0) != '\0') &&
       (puVar6 = *(undefined8 **)(param_1 + 0x70), puVar6 != (undefined8 *)0x0)) {
      iVar2 = *(int *)(puVar6 + 0xc);
      iVar3 = iVar2 + -1;
      *(int *)(puVar6 + 0xc) = iVar3;
      if (((iVar3 == 0) ||
          (((iVar3 == 1 && (iVar2 != 0 || *(char *)((long)puVar6 + 100) == '\0')) &&
           (*(char *)((long)puVar6 + 100) != '\0')))) &&
         (FUN__text__004473f0(puVar6), *(int *)(puVar6 + 0xc) == 0)) {
        (**(code **)*puVar6)(puVar6);
        FUN__text__00400fc0(4,puVar6);
        *(undefined1 *)(param_1 + 0xc0) = 0;
        return;
      }
      *(undefined1 *)(param_1 + 0xc0) = 0;
      return;
    }
  }
  else if (*(char *)(param_1 + 0xc0) == '\0') {
    lVar4 = -4;
    if (*(long *)(param_1 + 0x78) != -1) {
      lVar4 = *(long *)(param_1 + 0x78);
    }
    lVar4 = FUN__text__00523030(param_1,lVar4,*(undefined4 *)(param_1 + 0x98),param_3);
    if (lVar4 != 0) {
      *(undefined1 *)(param_1 + 0xc0) = 1;
      puVar6 = _DAT_008a45e0;
      lVar1 = -4;
      if (*(long *)(param_1 + 0x78) != -1) {
        lVar1 = *(long *)(param_1 + 0x78);
      }
      FUN__text__00448180(*_DAT_008a45e0,lVar1,0,0,2,3);
      uVar5 = 0;
      if (0.0 < *(float *)(param_1 + 0xac)) {
        uVar5 = 1;
        local_40 = -4;
        if (*(long *)(param_1 + 0x78) != -1) {
          local_40 = *(long *)(param_1 + 0x78);
        }
        local_34 = *(float *)(param_1 + 0x9c) * *(float *)(param_1 + 0xac);
        local_38 = *(undefined4 *)(param_1 + 0x98);
      }
      FUN__text__00448b00(*puVar6,lVar4,&local_40,uVar5,1);
      return;
    }
  }
  return;
}


