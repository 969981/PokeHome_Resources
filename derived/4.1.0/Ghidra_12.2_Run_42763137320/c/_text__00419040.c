/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00419040; name: FUN_.text__00419040
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00419040(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 *__s;
  int iVar5;
  long lVar6;
  undefined8 local_c0;
  long local_a8;
  uint local_a0;
  int iStack_9c;
  undefined8 local_98;
  long local_88;
  undefined1 auStack_80 [8];
  long local_78;
  undefined8 local_48;
  
  uVar1 = DAT_00aea228;
  uVar4 = (ulong)DAT_00aea228;
  if (DAT_00aea228 == 0 || DAT_00aea241 != '\0') {
    FUN__text__00413dc8(param_1,param_2);
    return;
  }
  FUN__text__00413b10(auStack_80,auStack_80 + (-0x40 - (uVar4 * 8 + 0xf & 0xffffffff0)),DAT_00aea228
                      ,0x711d83,1);
  if (0 < (int)uVar1) {
    iVar5 = 0;
    lVar6 = 0;
    do {
      FUN__text__00412c50(&local_a0,local_78 + lVar6,0x10,8,0x713429,0,1);
      puVar2 = (undefined8 *)CONCAT44(iStack_9c,local_a0);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0x887558;
        *(int *)(puVar2 + 1) = iVar5;
      }
      thunk_FUN__text__00413460(auStack_80,*(undefined8 *)(local_78 + lVar6));
      lVar6 = lVar6 + 8;
      iVar5 = iVar5 + 1;
    } while (uVar4 * 8 != lVar6);
  }
  __s = auStack_80 + (-0x40 - (uVar4 * 8 + 0xf & 0xffffffff0)) + -(uVar4 + 0xf & 0x1fffffff0);
  memset(__s,0,uVar4);
  uVar3 = _DAT_008a4d70;
  FUN__text__004de5e0(&local_a0,_DAT_008a4d70);
  while( true ) {
    FUN__text__004de734(&local_c0,uVar3);
    if ((local_88 == local_a8 && local_a0 == (uint)local_c0) && (iStack_9c == local_c0._4_4_))
    break;
    FUN__text__00413c5c(auStack_80,local_a0,iStack_9c);
    __s[local_a0] = 1;
    FUN__text__004de6b0(&local_a0);
  }
  uVar4 = 0;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  do {
    if (__s[uVar4] == '\0') {
      FUN__text__00413c78(auStack_80,uVar4 & 0xffffffff,param_2);
    }
    uVar4 = uVar4 + 1;
  } while (uVar1 != uVar4);
  FUN__text__00413c90(&local_a0,auStack_80);
  local_48 = 0xffffffffffffffff;
  FUN__text__00412c50(&local_c0,&local_48,0x10,8,0x70f008,0,1);
  uVar3 = local_48;
  if (local_c0 != (undefined8 *)0x0) {
    *local_c0 = 0x887580;
  }
  local_48 = 0xffffffffffffffff;
  local_c0 = (undefined8 *)uVar3;
  FUN__text__00413d68(param_1,&local_c0,1,local_98);
  FUN__text__00413c20(auStack_80);
  return;
}


