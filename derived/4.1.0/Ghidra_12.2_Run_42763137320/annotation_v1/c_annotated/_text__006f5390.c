/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005F5390
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f5390; name: FUN_.text__006f5390
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006f5390(long param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  (*(code *)*_DAT_008a7240)(*(undefined8 *)(param_1 + 8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(param_1 + 8) = 0;
  if ('\0' < *(char *)(param_1 + 0x192)) { // [自动静态注释] 条件判断/分支
    lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = param_1 + 0x4f8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = param_1 + 0x198; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      FUN__text__006f5a34(lVar2,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__006f5cc0(lVar1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar3 = lVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar1 = lVar1 + 0x48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar2 = lVar2 + 0xd8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar3 < *(char *)(param_1 + 0x192)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(param_1 + 400) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


