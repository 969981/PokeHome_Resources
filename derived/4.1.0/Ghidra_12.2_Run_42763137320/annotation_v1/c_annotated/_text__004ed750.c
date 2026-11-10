/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003ED750
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ed750; name: FUN_.text__004ed750
 */


/* WARNING: Removing unreachable block (ram,0x004ed778) */

void FUN__text__004ed750(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar1 = (long *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = *plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    if (*(int *)(param_2 + 0x10) < *(int *)(lVar2 + 0x10)) { // [自动静态注释] 条件判断/分支
      *(long *)(param_2 + 8) = lVar2;
      *plVar1 = param_2;
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    while (lVar3 = lVar2, lVar2 = *(long *)(lVar3 + 8), lVar2 != 0) { // [自动静态注释] 循环/迭代
      if (*(int *)(param_2 + 0x10) < *(int *)(lVar2 + 0x10)) { // [自动静态注释] 条件判断/分支
        *(long *)(param_2 + 8) = lVar2;
        if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
          plVar1 = (long *)(lVar3 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *plVar1 = param_2;
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_2 + 8) = 0;
  if (*plVar1 != 0) { // [自动静态注释] 条件判断/分支
    plVar1 = (long *)(*(long *)(param_1 + 8) + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *plVar1 = param_2;
  *(long *)(param_1 + 8) = param_2;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


