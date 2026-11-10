/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002DE540
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003de540; name: FUN_.text__003de540
 */


void FUN__text__003de540(long param_1,undefined8 param_2,undefined4 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar4 = *(undefined8 *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(param_1 + 0x20))(uVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__003d7a74(uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar3 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2 = *(undefined4 **)(param_1 + 0x10) + lVar3 * 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2 = puVar2 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while( true ) { // [自动静态注释] 循环/迭代
    if (uVar1 != 1) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not recover jumptable at 0x003de5c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK__text__003de5cc + (ulong)*(byte *)((ulong)uVar1 + 0x73ab96) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (lVar3 == 0) break; // [自动静态注释] 条件判断/分支
    lVar3 = lVar3 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(param_1 + 0x18) = lVar3;
    uVar1 = puVar2[-3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2 = puVar2 + -2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  **(undefined4 **)(param_1 + 0x10) = 0;
  *param_3 = 0x12;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


