/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00371000
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00471000; name: FUN_.text__00471000
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00471000(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar1 = _DAT_008a4cf0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (DAT_00aea7a0 == param_1) { // [自动静态注释] 条件判断/分支
    *_DAT_008a4d00 = 1;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar4 = (long *)(_DAT_008a4cf0 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar2 = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar3 = *plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar4 = (long *)(lVar3 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar3 != 0 && lVar3 != param_1); // [自动静态注释] 循环/迭代
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      plVar4 = (long *)(_DAT_008a4cf0 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long *)(_DAT_008a4cf0 + 4) != lVar3) { // [自动静态注释] 条件判断/分支
        plVar4 = (long *)(lVar2 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *plVar4 = *(long *)(lVar3 + 0x40);
      if (*(long *)(piVar1 + 2) == lVar3) { // [自动静态注释] 条件判断/分支
        *(long *)(piVar1 + 2) = lVar2;
        *piVar1 = *piVar1 + -1;
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      *piVar1 = *piVar1 + -1;
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


