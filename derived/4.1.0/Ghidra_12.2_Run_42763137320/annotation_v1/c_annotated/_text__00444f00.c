/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00344F00
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00444f00; name: FUN_.text__00444f00
 */


void FUN__text__00444f00(undefined4 *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  fVar2 = (float)param_1[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = param_1[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 < 6) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x00444f58 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__00444f6c + (ulong)*(ushort *)((ulong)uVar1 * 2 + 0x73b17a) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if ((float)param_1[4] != 0.0) { // [自动静态注释] 条件判断/分支
    *param_1 = *param_1;
    param_1[1] = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[2] = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[3] = fVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[4] = param_1[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[5] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 6);
    if (uVar1 == 0) { // [自动静态注释] 条件判断/分支
      fVar2 = fmodf(fVar2,6.2831855); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[3] = fVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (uVar1 != 5) { // [自动静态注释] 条件判断/分支
      fVar2 = fmodf(fVar2,1.0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[3] = fVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


