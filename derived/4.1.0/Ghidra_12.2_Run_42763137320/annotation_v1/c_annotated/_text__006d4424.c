/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005D4424
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d4424; name: FUN_.text__006d4424
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006d4424(long param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__006f5d9c(param_1 + 0x178); // [自动静态注释] 调用尚未恢复正式名称的函数
  (*(code *)*_DAT_008a5388) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (*(undefined8 *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x168), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             *(undefined8 *)(param_1 + 0x170),0,*_DAT_008a5390,0);
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  if (*(long *)(param_1 + 0x1c8) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__006f45d0(*(long *)(param_1 + 0x1c8),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar2 = *(long *)(param_1 + 0x1c8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__006f4420(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__006a0f24(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(param_1 + 0x1c8) = 0;
  } // [自动静态注释] 作用域/控制流边界
  plVar1 = *(long **)(param_1 + 0x1c0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar1 = *(long **)(param_1 + 0x1c0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*plVar1 + 8))(plVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__006a0f24(plVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(param_1 + 0x1c0) = 0;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


