/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00116E04
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00216e04; name: FUN_.text__00216e04
 */


undefined8 FUN__text__00216e04(long param_1,undefined4 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar4 = FUN__text__00217660(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((int)uVar4 == 0) { // [自动静态注释] 条件判断/分支
    return uVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar5 = FUN__text__002155e0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar5 & 1) != 0) { // [自动静态注释] 条件判断/分支
    uVar3 = (int)uVar4 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = (ulong)(uVar3 >> 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = 1 << (ulong)(uVar3 & 7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = *(long *)(param_1 + 0x80) + uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = uVar2 & *(byte *)(lVar1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((((uVar3 != 0) && (uVar3 == (uVar2 & *(byte *)(lVar1 + 0x5c)))) && // [自动静态注释] 条件判断/分支
        (uVar3 == (uVar2 & *(byte *)(*(long *)(param_1 + 0x88) + uVar5 + 0x5f8)))) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
       (uVar3 == (uVar2 & *(byte *)(*(long *)(param_1 + 0x88) + 0x3a18 + uVar5)))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


