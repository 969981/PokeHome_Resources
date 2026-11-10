/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002D16CC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d16cc; name: FUN_.text__003d16cc
 */


void FUN__text__003d16cc(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0x280) != -1) { // [自动静态注释] 条件判断/分支
    lVar1 = *(long *)(param_1 + 600); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 600) = 0;
    *(undefined8 *)(param_1 + 0x280) = 0xffffffffffffffff;
    if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__0014821c(lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
      (**(code **)(**(long **)(param_1 + 0x260) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (*(long **)(param_1 + 0x260),lVar1,*(undefined8 *)(param_1 + 0x268), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)(param_1 + 0x270));
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x18) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__005d9290(*(long *)(param_1 + 0x18),param_1 + 0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar1 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(param_1 + 8) = 0;
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(param_1 + 0x120) = 0;
  if (*(long *)(param_1 + 0x138) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__005d9290(*(long *)(param_1 + 0x138),param_1 + 0x130); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar1 = *(long *)(param_1 + 0x138); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x138) = 0;
    if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = *(long *)(param_1 + 0x248); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x248) = 0;
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 8) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


