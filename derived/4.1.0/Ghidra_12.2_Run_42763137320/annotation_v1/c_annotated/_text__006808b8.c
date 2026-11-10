/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005808B8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006808b8; name: FUN_.text__006808b8
 */


undefined8 FUN__text__006808b8(long param_1,int param_2,long *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = *(uint *)(param_3 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = uVar2 >> 0x14 ^ uVar2 >> 0xc ^ uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = (ulong)((uVar1 >> 7 ^ uVar1 >> 4 ^ uVar1) & param_2 - 1U); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4 = *(long **)(param_1 + uVar3 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar4 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    plVar5 = plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (*(uint *)(plVar5 + 1) == uVar2) { // [自动静态注释] 条件判断/分支
        return 0xfffffe0b; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      plVar5 = (long *)*plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar5 != (long *)0x0); // [自动静态注释] 循环/迭代
    *param_3 = (long)plVar4;
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(param_1 + uVar3 * 8) = param_3;
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


