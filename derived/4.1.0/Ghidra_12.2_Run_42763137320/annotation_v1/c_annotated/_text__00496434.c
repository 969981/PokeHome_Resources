/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00396434
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00496434; name: FUN_.text__00496434
 */


void FUN__text__00496434(long param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined1 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__0046a2e0(param_1,*(ushort *)((long)param_2 + 0x24) & 1,param_2[2]); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(param_1 + 0x70) != 0) { // [自动静态注释] 条件判断/分支
    if ((*(byte *)(*(long *)(param_1 + 0x70) + 200) & 1) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__00469b30(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar1 = *(undefined1 *)(param_2 + 5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_2[2] = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = *(ushort *)((long)param_2 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto joined_r0x00496484; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__0046a010(param_1,*param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = *(undefined1 *)(param_2 + 5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[2] = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(ushort *)((long)param_2 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
joined_r0x00496484: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x80) != 0)) { // [自动静态注释] 条件判断/分支
    *(undefined1 *)(param_2 + 5) = 0;
    *(ushort *)((long)param_2 + 0x24) = uVar2 & 0xfffe;
    (**(code **)(**(long **)(param_1 + 0x80) + 0x120))(*(long **)(param_1 + 0x80),param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x78) == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(param_2 + 5) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x004964f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x78) + 0x120))(*(long **)(param_1 + 0x78),param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


