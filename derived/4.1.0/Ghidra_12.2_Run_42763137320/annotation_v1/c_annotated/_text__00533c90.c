/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00433C90
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00533c90; name: FUN_.text__00533c90
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__00533c90(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4 // [自动静态注释] 调用尚未恢复正式名称的函数
                   ,undefined8 param_5,long param_6,undefined8 param_7) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_a0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_98; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = FUN__text__0052163c(param_4,param_6); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar4 = FUN__text__00521904(param_4,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar6 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_88 = uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_80 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_78 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__0052163c(param_5,param_6); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar5 = FUN__text__00521904(param_5,uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_a0 = uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_98 = uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_90 = uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = FUN__text__00521b44(param_4,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((((uVar3 & 1) == 0) || // [自动静态注释] 条件判断/分支
      (uVar3 = FUN__text__00521b44(uVar4,param_2,param_3,param_5,uVar2), (uVar3 & 1) == 0)) || // [自动静态注释] 调用尚未恢复正式名称的函数
     (uVar3 = FUN__text__00533100(uVar4,param_2,param_3,uVar5,uVar6,uVar7, // [自动静态注释] 调用尚未恢复正式名称的函数
                                  *(undefined8 *)(param_6 + 0xb0),0,param_7), (uVar3 & 1) == 0)) {
    FUN__text__0052b23c(param_7); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__0052b1ac(param_7,&local_88,&local_a0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


