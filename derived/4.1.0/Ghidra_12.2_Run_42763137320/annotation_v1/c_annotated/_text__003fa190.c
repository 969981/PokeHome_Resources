/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002FA190
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fa190; name: FUN_.text__003fa190
 */


void FUN__text__003fa190(undefined8 param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((long *)*param_2 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    plVar5 = (long *)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar4 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      while ((plVar3 = plVar5, (char)plVar3[0xd] != '\0' && // [自动静态注释] 循环/迭代
             (uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3), (uVar2 & 1) != 0))) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar5 = (long *)plVar3[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar1 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((long *)*param_2 != plVar3) { // [自动静态注释] 条件判断/分支
          plVar1 = plVar4 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *plVar1 = (long)plVar5;
        (**(code **)*plVar3)(plVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        FUN__text__00400fc0(7,plVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (plVar5 == (long *)0x0) { // [自动静态注释] 条件判断/分支
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      plVar5 = (long *)plVar3[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar4 = plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while ((long *)plVar3[2] != (long *)0x0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


