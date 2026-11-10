/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00554514
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00654514; name: FUN_.text__00654514
 */


void FUN__text__00654514(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((*(long *)(param_1 + 0xc08) != -1) && (*(long *)(param_1 + 200) != 0)) { // [自动静态注释] 条件判断/分支
    if (*(long *)(param_1 + 0xe8) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__00667a44(param_1,3,2); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    local_8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__00679878(&local_8); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_30 = *(undefined8 *)(param_1 + 0xc08); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_28 = local_8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0065413c(*(undefined8 *)(param_1 + 200),&local_30,&LAB__text__00655164); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(long *)(param_1 + 0xe8) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__00667a8c(param_1,3); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


