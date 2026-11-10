/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b244c; name: FUN_.text__005b244c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005b244c(long param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  *(undefined1 *)(param_1 + 0x898) = 1;
  iVar1 = *(int *)(*_DAT_0089f5b8 + 0x70);
  if (*(int *)(param_1 + 0xdc) != iVar1) {
    uVar7 = *(undefined8 *)(param_1 + 0xe8);
    uVar3 = FUN__text__005cd528(param_1,iVar1 != 0);
    uVar4 = FUN__text__005cd59c(param_1,iVar1 != 0);
    (*(code *)*_DAT_008a57e0)(uVar7,0,0,uVar3,uVar4);
    *(int *)(param_1 + 0xdc) = iVar1;
  }
  nn::os::GetSystemTick();
  lVar5 = nn::os::ConvertToTimeSpan();
  piVar2 = _DAT_008a0300;
  FUN__text__006f5584(param_1 + 0xe0,param_1 + 0xd8,param_1 + 0x718 + (long)*_DAT_008a0300 * 0x58,
                      param_1 + (long)*_DAT_008a0300 * 0x58 + 0x7c8);
  nn::os::GetSystemTick();
  lVar6 = nn::os::ConvertToTimeSpan();
  *(long *)(param_1 + 0xd0) = lVar6 - lVar5;
  FUN__text__006f2c54(param_2,param_1 + 0x718 + (long)*piVar2 * 0x58);
  return;
}


