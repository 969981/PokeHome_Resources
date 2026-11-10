/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002B7C4C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b7c4c; name: FUN_.text__003b7c4c
 */


void FUN__text__003b7c4c(long param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_4c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_18 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_40 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_38 = param_3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_30 = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_28 = param_4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0xa0) + *(long *)(param_1 + 0xa8) * 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(param_1 + 0xa8) == *(long *)(param_1 + 0xb0)) { // [自动静态注释] 条件判断/分支
    FUN__text__003b7f10(auStack_18,param_1 + 0x60,puVar1,1,&local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = uVar2 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar2 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x60);
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
  *puVar1 = CONCAT44(uStack_4c,param_2);
  puVar1[1] = uStack_48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[4] = local_30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[5] = uStack_28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[2] = local_40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[3] = uStack_38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
  *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


