/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004192d0; name: FUN_.text__004192d0
 */


void FUN__text__004192d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
                        uint param_5,undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined1 auStack_70 [8];
  long local_68;
  undefined8 *local_38;
  
  uVar1 = FUN__text__00413950(1);
  uVar2 = param_5;
  if (uVar1 < param_5) {
    uVar2 = FUN__text__00413950(1);
  }
  FUN__text__00413b10(auStack_70,auStack_70 + -((ulong)uVar2 * 8 + 0xf & 0xffffffff0),(ulong)uVar2,
                      0x7196ab,1);
  *param_4 = param_5;
  if (uVar2 != 0) {
    lVar3 = 0;
    do {
      FUN__text__00412c50(&local_38,local_68 + lVar3,0x18,8,0,param_6,1);
      if (local_38 != (undefined8 *)0x0) {
        *local_38 = 0x8875a8;
        local_38[1] = param_4;
        local_38[2] = param_3;
      }
      thunk_FUN__text__00413460(auStack_70,*(undefined8 *)(local_68 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((ulong)uVar2 * 8 != lVar3);
  }
  FUN__text__00413c90(param_1,auStack_70);
  FUN__text__00413c20(auStack_70);
  return;
}


