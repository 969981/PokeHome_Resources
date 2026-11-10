/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0015C600
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0025c600; name: FUN_.text__0025c600
 */


undefined8 FUN__text__0025c600(undefined8 param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = FUN__text__003069c8(*param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar3 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = *(int *)(lVar3 + 0x9a20) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 < 6) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x0025c64c */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)(&UNK__text__0025c658 + (ulong)*(byte *)((ulong)uVar1 + 0x72bf94) * 4))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return uVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__003069b0(*param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar5 = FUN__text__00205770(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar5 & 1) == 0) { // [自动静态注释] 条件判断/分支
    if ((uVar2 & 1) == 0) { // [自动静态注释] 条件判断/分支
      uVar4 = 0x4682c2038761ab1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar4 = 0x4682e2038761e17; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else if ((uVar2 & 1) == 0) { // [自动静态注释] 条件判断/分支
    uVar4 = 0x4682d2038761c64; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar4 = 0x4682f2038761fca; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


