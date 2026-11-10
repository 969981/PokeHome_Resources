/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005AC014
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ac014; name: FUN_.text__006ac014
 */


void FUN__text__006ac014(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar3 = *(uint *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar3 & 0xc00) == 0) { // [自动静态注释] 条件判断/分支
    uVar6 = FUN__text__006d5724(*(undefined8 *)(param_2 + 0xb8),DAT_00c5fb70); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x40) = uVar6;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = ((ulong)(uVar3 >> 2) & 3) << 2 | ((ulong)(uVar3 >> 2) & 3) << 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = ((ulong)uVar3 & 3) * 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = (ulong)(uVar3 >> 6) & 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = *(long *)(param_1 + 0x18) + (lVar4 + ((ulong)uVar3 & 0x30) | uVar7) + uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = *(long *)(param_1 + 0x18) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          (ulong)((int)uVar2 + ((int)lVar4 + (int)((ulong)uVar3 & 0x30) | (uint)uVar7) + 4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((uVar3 & 0xc00) != 0x800) { // [自动静态注释] 条件判断/分支
    lVar4 = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar5 = FUN__text__006d5734(lVar1,lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar6 = FUN__text__006d5724(*(undefined8 *)(param_2 + 0xb8),uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


