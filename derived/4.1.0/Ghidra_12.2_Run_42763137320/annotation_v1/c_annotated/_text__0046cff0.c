/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0036CFF0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046cff0; name: FUN_.text__0046cff0
 */


void FUN__text__0046cff0(undefined8 param_1,undefined8 param_2,undefined8 *param_3, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 param_4,undefined8 param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = (ulong)*(uint *)(param_3 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(uint *)(param_3 + 1) != 0) { // [自动静态注释] 条件判断/分支
    puVar2 = (undefined8 *)*param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar3 = puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (*(char *)((long)*puVar3 + 0xd) == '\x04') { // [自动静态注释] 条件判断/分支
        FUN__text__0046d170(param_1,param_2,*(undefined4 *)*puVar3,param_4,param_5); // [自动静态注释] 调用尚未恢复正式名称的函数
        puVar2 = (undefined8 *)*param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar1 = (ulong)*(uint *)(param_3 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      puVar3 = puVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar3 != puVar2 + uVar1); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


