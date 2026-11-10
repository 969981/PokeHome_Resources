/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0036C880
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046c880; name: FUN_.text__0046c880
 */


void FUN__text__0046c880(uint param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (DAT_00aea708 != 0) { // [自动静态注释] 条件判断/分支
    uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (DAT_00aea708 != 0) { // [自动静态注释] 条件判断/分支
      uVar1 = param_1 / DAT_00aea708; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    plVar2 = (long *)(DAT_00aea700 + (ulong)(param_1 - uVar1 * DAT_00aea708) * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      plVar2 = (long *)*plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar2 == (long *)0x0) { // [自动静态注释] 条件判断/分支
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } while (*(uint *)(plVar2 + 1) != param_1); // [自动静态注释] 循环/迭代
    for (lVar3 = plVar2[2]; lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x48)) { // [自动静态注释] 循环/迭代
      local_18 = 0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long *)(lVar3 + 0x50) != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__0046c410(&DAT_00aea6f8,lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__00469530(*(undefined8 *)(lVar3 + 0x50),lVar3,&local_18,1); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined8 *)(lVar3 + 0x50) = 0;
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


