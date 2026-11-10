/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00551724
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00651724; name: FUN_.text__00651724
 */


undefined8 FUN__text__00651724(undefined8 param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_20 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_18 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_28 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0065425c(param_1,&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
  do { // [自动静态注释] 循环/迭代
    lVar1 = FUN__text__0065426c(&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar1 == 0) { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    puVar2 = *(undefined8 **)(*(long *)(lVar1 + 0x18) + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (puVar2 == (undefined8 *)0x0); // [自动静态注释] 循环/迭代
  return *puVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


