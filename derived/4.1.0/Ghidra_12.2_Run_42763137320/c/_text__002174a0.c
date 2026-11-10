/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002174a0; name: FUN_.text__002174a0
 */


undefined8 FUN__text__002174a0(undefined8 param_1,long *param_2,long param_3)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar4 = 0;
  if ((param_2 != (long *)0x0) && (param_3 != 0)) {
    uVar3 = (**(code **)(*param_2 + 0x40))(param_2);
    *(undefined4 *)(param_3 + 0x2c) = uVar3;
    uVar1 = (**(code **)(*param_2 + 0x78))(param_2);
    *(undefined1 *)(param_3 + 0x49) = uVar1;
    uVar5 = FUN__text__00215634(param_2);
    if ((uVar5 & 1) == 0) {
      uVar5 = (**(code **)(*param_2 + 0x38))(param_2);
      if ((uVar5 & 1) == 0) {
        uVar4 = 1;
        *(undefined1 *)(param_3 + 0x35) = 1;
      }
      else {
        *(undefined1 *)(param_3 + 0x35) = 0;
        bVar2 = (**(code **)(*param_2 + 0x50))(param_2,param_3 + 0x30);
        *(byte *)(param_3 + 0x37) = bVar2 & 1;
        bVar2 = (**(code **)(*param_2 + 0x80))(param_2);
        *(byte *)(param_3 + 0x34) = bVar2 & 1;
        bVar2 = (**(code **)(*param_2 + 0x48))(param_2);
        *(byte *)(param_3 + 0x36) = bVar2 & 1;
        uVar3 = (**(code **)(*param_2 + 200))(param_2);
        *(undefined4 *)(param_3 + 0x1a) = uVar3;
        (**(code **)(*param_2 + 0x68))(param_2,param_3);
        uVar1 = (**(code **)(*param_2 + 0x70))(param_2);
        *(undefined1 *)(param_3 + 0x48) = uVar1;
        uVar3 = (**(code **)(*param_2 + 0x58))(param_2);
        *(undefined4 *)(param_3 + 0x60) = uVar3;
        uVar3 = (**(code **)(*param_2 + 0x90))(param_2);
        *(undefined4 *)(param_3 + 0x24) = uVar3;
        uVar3 = (**(code **)(*param_2 + 0x60))(param_2);
        *(undefined4 *)(param_3 + 0x44) = uVar3;
        (**(code **)(*param_2 + 0x118))(param_2);
        (**(code **)(*param_2 + 0x120))(param_2,param_3);
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}


