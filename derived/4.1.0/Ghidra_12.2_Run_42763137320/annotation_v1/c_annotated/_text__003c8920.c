/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002C8920
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c8920; name: FUN_.text__003c8920
 */


void FUN__text__003c8920(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((param_2 != 0) && (*(long *)(param_1 + 0x188) != 0)) { // [自动静态注释] 条件判断/分支
    lVar2 = *(long *)(param_1 + 0x188) << 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x180) + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      FUN__text__005c60c0(param_2,*puVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar2 = lVar2 + -0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1 = puVar1 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar2 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


