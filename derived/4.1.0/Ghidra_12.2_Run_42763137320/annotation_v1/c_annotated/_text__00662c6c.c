/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00562C6C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00662c6c; name: FUN_.text__00662c6c
 */


undefined8 FUN__text__00662c6c(long param_1,long param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_1 != 0) { // [自动静态注释] 条件判断/分支
    lVar2 = FUN__text__00678414(1,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
      return 0x1b; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    *(long *)(lVar2 + 8) = param_2;
    plVar3 = (long *)(param_1 + 0xef8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar4 = *(long **)(param_1 + 0xef8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((plVar4 == (long *)0x0) || ((param_3 & 1) == 0)) { // [自动静态注释] 条件判断/分支
      while (plVar4 != (long *)0x0) { // [自动静态注释] 循环/迭代
        *(ulong *)(plVar4[1] + 0xf40) = *(ulong *)(plVar4[1] + 0xf40) & 0xffefffffffffffff;
        plVar3 = (long *)*plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar4 = (long *)*plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      do { // [自动静态注释] 循环/迭代
        *(long *)(plVar4[1] + 0xee8) = param_2;
        plVar4 = (long *)*plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (plVar4 != (long *)0x0); // [自动静态注释] 循环/迭代
      plVar4 = (long *)(param_2 + 0xef8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        plVar5 = plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar4 = (long *)*plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (plVar4 != (long *)0x0); // [自动静态注释] 循环/迭代
      *plVar5 = *plVar3;
      *plVar3 = 0;
    } // [自动静态注释] 作用域/控制流边界
    *plVar3 = lVar2;
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = 0x10000000000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_3 & 1) == 0) { // [自动静态注释] 条件判断/分支
    uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_2 + 0xee8) = param_1;
  *(ulong *)(param_2 + 0xf40) = *(ulong *)(param_2 + 0xf40) & 0xffefffffffffffff | uVar1;
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


