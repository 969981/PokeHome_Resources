/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003DF670
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004df670; name: FUN_.text__004df670
 */


void FUN__text__004df670(long *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(uint *)(param_1 + 1) != 0) { // [自动静态注释] 条件判断/分支
    uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = (ulong)*(uint *)(param_1 + 1) * 0xc0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = *param_1 + 0x98; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (*(int *)(lVar2 + 0x18) == 3) { // [自动静态注释] 条件判断/分支
        uVar4 = -(uVar1 >> 0x1f) & 0xfffffff800000000 | uVar1 << 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar1 = (ulong)((int)uVar1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long *)(*(long *)(param_2 + 8) + uVar4) = lVar2;
        *(long *)(*(long *)(param_2 + 0x10) + uVar4) = lVar2 + -0x98;
      } // [自动静态注释] 作用域/控制流边界
      lVar2 = lVar2 + 0xc0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar3 = lVar3 + -0xc0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar3 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


