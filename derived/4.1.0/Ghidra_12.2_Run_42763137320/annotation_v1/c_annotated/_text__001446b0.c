/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000446B0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001446b0; name: FUN_.text__001446b0
 */


ulong FUN__text__001446b0(undefined8 param_1,long *param_2,undefined4 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_5b0 [6]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_596; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_594; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_590; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_204; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_200; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_1f8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_1f4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_1f2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_1d0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_1cc; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_1c8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_1c0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_1bc; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_1b8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_1b4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_98; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_38 = 0x72461e; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(param_3 + 0x16) != 0) { // [自动静态注释] 条件判断/分支
    local_38 = *(long *)(param_3 + 0x16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00144944(&local_58,param_2,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = nn::swkbd::GetRequiredStringBufferSize(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar2,0x1000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68 = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_60 = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::swkbd::MakePreset(local_5b0,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((*(long *)(param_3 + 0x18) == 0) || (param_3[0x1a] == 0)) { // [自动静态注释] 条件判断/分支
    local_90 = nn::swkbd::GetRequiredWorkBufferSize(false); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_90 = nn::swkbd::GetRequiredWorkBufferSize(param_3[0x1a]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  local_98 = (**(code **)(*param_2 + 0x10))(param_2,local_90,0x1000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::swkbd::SetUserWordList // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            ((ShowKeyboardArg *)local_5b0,*(UserWord **)(param_3 + 0x18),param_3[0x1a]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_80 = nn::swkbd::GetRequiredTextCheckWorkBufferSize(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_88 = (**(code **)(*param_2 + 0x10))(param_2,local_80,0x1000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_5b0[0] = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_594 = param_3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_596 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_590 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::swkbd::SetHeaderText((KeyboardConfig *)local_5b0,*(wchar16 **)(param_3 + 2)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::swkbd::SetSubText((KeyboardConfig *)local_5b0,*(wchar16 **)(param_3 + 4)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_204 = param_3[6]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_200 = param_3[7]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_1f4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_1f2 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_1f8 = param_3[8]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_1d0 = param_3[9]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_1cc = param_3[10]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_1c8 = *(undefined8 *)(param_3 + 0xb); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_1c0 = param_3[0xd]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_1bc = param_3[0xe]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_1b8 = param_3[0xf]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_1b4 = param_3[0x10]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  DAT_008e1ae8 = *(undefined8 *)(param_3 + 0x12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  DAT_008e1af0 = *(undefined8 *)(param_3 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::swkbd::SetTextCheckCallback // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            ((ShowKeyboardArg *)local_5b0, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             (_func_TextCheckResult_void_ptr_ulong_ptr_String_ptr *)&LAB__text__00144a60); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::swkbd::SetInitialText((ShowKeyboardArg *)local_5b0,*(wchar16 **)(param_3 + 0x16)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar1 = nn::swkbd::ShowKeyboard((String *)&local_68,(ShowKeyboardArg *)local_5b0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(*param_2 + 0x18))(param_2,local_88,local_80,0x1000); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (**(code **)(*param_2 + 0x18))(param_2,local_98,local_90,0x1000); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (uVar1 == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__005f32c4(param_1,local_68); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar4 = FUN__text__005f320c(param_1,local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar4 & 1) == 0) { // [自动静态注释] 条件判断/分支
      uVar5 = 0x100000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = 0x80000001; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar1 & 0x3fffff) != 0x29f) { // [自动静态注释] 条件判断/分支
      uVar6 = 0x80000002; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*param_2 + 0x18))(param_2,lVar3,uVar2,0x1000); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar3 = local_58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((lVar3 != 0) && ((**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(), local_58 != 0)) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return uVar6 | uVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


