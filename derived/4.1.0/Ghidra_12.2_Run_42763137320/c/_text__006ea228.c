/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ea228; name: FUN_.text__006ea228
 */


undefined8
FUN__text__006ea228(undefined4 *param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  *param_1 = 0;
  param_1[1] = param_4;
  local_40 = 0;
  uStack_38 = 0;
  FUN__text__006ebbe4(&local_40);
  local_40 = CONCAT44(0x10,(undefined4)local_40);
  lVar1 = FUN__text__006ec37c(param_2,&local_40);
  *(ulong *)(param_1 + 10) = (param_3 + lVar1) - 1U & -lVar1;
  uVar2 = FUN__text__006d83b0();
  uVar3 = FUN__text__006eacd8(param_1 + 0xe,param_2,uVar2,0x10,*(undefined8 *)(param_1 + 10));
  uVar2 = 0;
  if ((uVar3 & 1) != 0) {
    FUN__text__006ec64c(param_1 + 0xe,param_1 + 0x72);
    uVar2 = FUN__text__006d83b0();
    uVar3 = FUN__text__006eacd8(param_1 + 0x7a,param_2,uVar2,0x10,*(undefined8 *)(param_1 + 10));
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    FUN__text__006ec64c(param_1 + 0x7a,param_1 + 0xde);
    if (param_1[1] == 3) {
      uVar2 = FUN__text__006d83b0();
      uVar3 = FUN__text__006eacd8(param_1 + 0xe6,param_2,uVar2,0x10,*(undefined8 *)(param_1 + 10));
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      FUN__text__006ec64c(param_1 + 0xe6,param_1 + 0x14a);
    }
    uVar2 = 1;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  return uVar2;
}


