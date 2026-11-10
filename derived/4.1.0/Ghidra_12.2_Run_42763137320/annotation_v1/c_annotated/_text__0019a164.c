/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0009A164
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019a164; name: FUN_.text__0019a164
 */


void FUN__text__0019a164(long *param_1,uint param_2,undefined8 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar3 = FUN__text__0019b770(*param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (param_2 < uVar3) { // [自动静态注释] 条件判断/分支
    if (*(ulong *)(*(long *)(*param_1 + 0x60) + 0xf8) <= (ulong)param_2) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
      abort(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    puVar4 = (undefined8 *)(*(long *)(*(long *)(*param_1 + 0x60) + 0xf0) + (ulong)param_2 * 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = *puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = puVar4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = puVar4[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_3 + 3) = *(undefined4 *)(puVar4 + 3);
    *param_3 = uVar1;
    param_3[1] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_3[2] = uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


