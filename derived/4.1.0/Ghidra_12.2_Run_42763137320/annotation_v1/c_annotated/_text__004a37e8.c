/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003A37E8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a37e8; name: FUN_.text__004a37e8
 */


undefined8 FUN__text__004a37e8(long param_1,uint *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = FUN__text__004ada80(param_1 + 0xa8,CONCAT44(param_2[1],param_2[2]),0); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
    if (*(int *)(lVar3 + 0x70) != 0) { // [自动静态注释] 条件判断/分支
      *(int *)(lVar3 + 0x70) = *(int *)(lVar3 + 0x70) + -1;
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__004a1f20(lVar3,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (*param_2 < 0xb) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x004a3848 */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)(&UNK__text__004a3854 + (ulong)*(byte *)((ulong)*param_2 + 0x73d940) * 4))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return uVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = *(undefined8 *)(param_2 + 0xe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(undefined8 *)(param_2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(undefined8 *)(param_2 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_2[0xc] != 2) { // [自动静态注释] 条件判断/分支
    uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0xf4) = 1;
  FUN__text__004adfa4(param_1 + 0xf8,uVar1,0,uVar4,1,uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


