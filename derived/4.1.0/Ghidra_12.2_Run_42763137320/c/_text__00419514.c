/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00419514; name: FUN_.text__00419514
 */


void FUN__text__00419514(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [8];
  long local_40;
  undefined8 *local_38;
  undefined8 *local_18;
  
  lVar3 = *(long *)(DAT_00aea220 + (param_2 & 0xffffffff) * 8);
  FUN__text__004d4eb0(auStack_48,lVar3);
  if (local_40 != -1) {
    local_38 = (undefined8 *)0xffffffffffffffff;
    FUN__text__00412c50(&local_18,&local_38,0x10,8,0x713429,0,1);
    puVar1 = local_38;
    if (local_18 != (undefined8 *)0x0) {
      *local_18 = 0x8875d0;
      local_18[1] = lVar3;
    }
    local_38 = (undefined8 *)0xffffffffffffffff;
    local_18 = puVar1;
    FUN__text__00413d68(param_1,&local_18,1,local_40);
    return;
  }
  FUN__text__004d5f50(lVar3);
  if (*(long *)(lVar3 + 0x30) == 0) {
    if (((*(long *)(lVar3 + 0x68) == 0) || (*(long *)(*(long *)(lVar3 + 0x68) + 0x80) == 0)) &&
       (lVar2 = FUN__text__0040a740(), lVar2 != 0)) {
      FUN__text__00414710(lVar3,lVar2);
    }
  }
  FUN__text__00413d04(param_1);
  return;
}


