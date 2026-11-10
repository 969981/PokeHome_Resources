/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002EC1B4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ec1b4; name: FUN_.text__003ec1b4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__003ec1b4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                   long param_5,long param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_298; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_290 [512]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_90 [3]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_74; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_6c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_54; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_41; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_78 = *(undefined4 *)(param_5 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68 = 0x800000008; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_60 = 0x100000b01; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_74 = *(undefined4 *)(param_5 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_70 = *(undefined4 *)(param_5 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_90[2] = *(undefined8 *)(param_5 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_54 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_90[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_6c = local_78; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00146354(local_90,*(undefined8 *)(param_6 + 8),local_90 + 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0014953c(auStack_290,local_90[0]); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = FUN__text__0059fd48(local_90[0]); // [自动静态注释] 调用尚未恢复正式名称的函数
  *param_1 = uVar2;
  uVar2 = FUN__text__005d5504(auStack_290); // [自动静态注释] 调用尚未恢复正式名称的函数
  *param_2 = uVar2;
  uVar2 = FUN__text__005d54d0(auStack_290); // [自动静态注释] 调用尚未恢复正式名称的函数
  *param_3 = uVar2;
  local_298 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_28 = &local_298; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = FUN__text__003eca20(param_6 + 0x5a0,&local_298,_DAT_008a01d8,&local_28,&uStack_41); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(lVar3 + 0x18) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(lVar3 + 0x18) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = local_90[0]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_90[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar3 + 0x18) = lVar1;
  FUN__text__0014821c(auStack_290); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_90[0] != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_90[0] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


