/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0054f878; name: FUN_.text__0054f878
 */


undefined4
FUN__text__0054f878(long param_1,long *param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 0x24) = param_4;
  *(undefined4 *)(param_1 + 0x28) = param_5;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  uVar1 = FUN__text__005507a0(1,param_5);
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar1,0x70c87e,0x31);
  uVar1 = 0x34;
  *(long *)(param_1 + 0x10) = lVar2;
  if (lVar2 != 0) {
    FUN__text__00550a20(lVar2,1,*(undefined4 *)(param_1 + 0x28),param_6);
    uVar1 = FUN__text__00550a10(*(undefined8 *)(param_1 + 0x10));
    lVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar1,0x70c87e,0x36);
    *(long *)(param_1 + 0x18) = lVar2;
    uVar1 = 0x34;
    if (lVar2 != 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


