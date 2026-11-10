/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0044FD80
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0054fd80; name: FUN_.text__0054fd80
 */


void FUN__text__0054fd80(long *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((int)param_1[5] != 0) { // [自动静态注释] 条件判断/分支
    uVar4 = (ulong)(uint)((int)param_1[5] << 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      uVar4 = (ulong)((int)uVar4 + 0xfU & 0xfffffff0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(ulong *)(lVar3 + uVar2 * 8) = uVar4 + lVar3;
      uVar1 = *(uint *)(param_2 + uVar2 * 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar1 < 0xb) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x0054fe18 */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK__text__0054fde0 + (ulong)*(byte *)((ulong)uVar1 + 0x73e392) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      uVar2 = uVar2 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar2 < *(uint *)(param_1 + 5)); // [自动静态注释] 循环/迭代
    if (*(uint *)(param_1 + 5) != 0) { // [自动静态注释] 条件判断/分支
      uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        uVar1 = *(uint *)(param_2 + uVar2 * 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (uVar1 < 0xb) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x0054ff50 */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK__text__0054ff18 + (ulong)*(ushort *)((ulong)uVar1 * 2 + 0x73e39e) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
        uVar2 = uVar2 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar2 < *(uint *)(param_1 + 5)); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


