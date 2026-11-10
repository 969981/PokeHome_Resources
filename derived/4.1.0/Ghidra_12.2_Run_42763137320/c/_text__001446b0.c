/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001446b0; name: FUN_.text__001446b0
 */


ulong FUN__text__001446b0(undefined8 param_1,long *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 local_5b0 [6];
  undefined1 local_596;
  undefined4 local_594;
  undefined4 uStack_590;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1f8;
  undefined2 local_1f4;
  undefined1 local_1f2;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_68;
  undefined8 uStack_60;
  long local_58;
  long local_38;
  
  local_38 = 0x72461e;
  if (*(long *)(param_3 + 0x16) != 0) {
    local_38 = *(long *)(param_3 + 0x16);
  }
  FUN__text__00144944(&local_58,param_2,&local_38);
  uVar2 = nn::swkbd::GetRequiredStringBufferSize();
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar2,0x1000);
  local_68 = lVar3;
  uStack_60 = uVar2;
  nn::swkbd::MakePreset(local_5b0,0);
  if ((*(long *)(param_3 + 0x18) == 0) || (param_3[0x1a] == 0)) {
    local_90 = nn::swkbd::GetRequiredWorkBufferSize(false);
  }
  else {
    local_90 = nn::swkbd::GetRequiredWorkBufferSize(param_3[0x1a]);
  }
  local_98 = (**(code **)(*param_2 + 0x10))(param_2,local_90,0x1000);
  nn::swkbd::SetUserWordList
            ((ShowKeyboardArg *)local_5b0,*(UserWord **)(param_3 + 0x18),param_3[0x1a]);
  local_80 = nn::swkbd::GetRequiredTextCheckWorkBufferSize();
  local_88 = (**(code **)(*param_2 + 0x10))(param_2,local_80,0x1000);
  local_5b0[0] = *param_3;
  local_594 = param_3[1];
  local_596 = 0;
  uStack_590 = 1;
  nn::swkbd::SetHeaderText((KeyboardConfig *)local_5b0,*(wchar16 **)(param_3 + 2));
  nn::swkbd::SetSubText((KeyboardConfig *)local_5b0,*(wchar16 **)(param_3 + 4));
  local_204 = param_3[6];
  local_200 = param_3[7];
  local_1f4 = 0;
  local_1f2 = 1;
  local_1f8 = param_3[8];
  local_1d0 = param_3[9];
  local_1cc = param_3[10];
  local_1c8 = *(undefined8 *)(param_3 + 0xb);
  local_1c0 = param_3[0xd];
  local_1bc = param_3[0xe];
  local_1b8 = param_3[0xf];
  local_1b4 = param_3[0x10];
  DAT_008e1ae8 = *(undefined8 *)(param_3 + 0x12);
  DAT_008e1af0 = *(undefined8 *)(param_3 + 0x14);
  nn::swkbd::SetTextCheckCallback
            ((ShowKeyboardArg *)local_5b0,
             (_func_TextCheckResult_void_ptr_ulong_ptr_String_ptr *)&LAB__text__00144a60);
  nn::swkbd::SetInitialText((ShowKeyboardArg *)local_5b0,*(wchar16 **)(param_3 + 0x16));
  uVar1 = nn::swkbd::ShowKeyboard((String *)&local_68,(ShowKeyboardArg *)local_5b0);
  (**(code **)(*param_2 + 0x18))(param_2,local_88,local_80,0x1000);
  (**(code **)(*param_2 + 0x18))(param_2,local_98,local_90,0x1000);
  if (uVar1 == 0) {
    FUN__text__005f32c4(param_1,local_68);
    uVar4 = FUN__text__005f320c(param_1,local_58);
    uVar6 = 0;
    uVar5 = 0;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0x100000000;
    }
  }
  else {
    uVar5 = 0;
    uVar6 = 0x80000001;
    if ((uVar1 & 0x3fffff) != 0x29f) {
      uVar6 = 0x80000002;
    }
  }
  if (lVar3 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,lVar3,uVar2,0x1000);
  }
  lVar3 = local_58;
  local_58 = 0;
  if ((lVar3 != 0) && ((**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(), local_58 != 0)) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  return uVar6 | uVar5;
}


