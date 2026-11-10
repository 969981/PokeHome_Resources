/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00093EC0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00193ec0; name: FUN_.text__00193ec0
 */


void FUN__text__00193ec0(undefined8 param_1,undefined8 *param_2,long *param_3,undefined4 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_3f; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_3e; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_3d; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_3c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_3b; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_3a; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_39; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_37; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_36; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uStack_35; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((*param_3 == 0) || (uVar1 = FUN__text__00306588(), (uVar1 & 1) != 0)) { // [自动静态注释] 条件判断/分支
    *param_2 = 0;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uStack_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_37 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_36 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_35 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_3f = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_3e = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_3d = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_3c = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_3b = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_3a = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_39 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00307180(*param_3,&uStack_40,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)((long)param_2 + 1) = local_3f;
  *(undefined1 *)((long)param_2 + 4) = local_3b;
  *(undefined1 *)((long)param_2 + 3) = uStack_39;
  *(undefined1 *)((long)param_2 + 5) = uStack_38;
  *(undefined1 *)((long)param_2 + 2) = local_3d;
  *(undefined1 *)((long)param_2 + 7) = uStack_36;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


