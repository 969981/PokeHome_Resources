/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004F68E0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f68e0; name: FUN_.text__005f68e0
 */


undefined8 FUN__text__005f68e0(long param_1,ulong param_2,ulong param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 == 0) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (param_3 < 9) { // [自动静态注释] 条件判断/分支
    param_3 = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (0xfff < param_3) { // [自动静态注释] 条件判断/分支
    uVar1 = 0x1000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = param_2 / uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar5 = param_2 - uVar2 * uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
    lVar4 = uVar1 - lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar4 = lVar4 + param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = FUN__text__005f5f04(param_1,lVar4,param_3,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar5 == 0) { // [自动静态注释] 条件判断/分支
    lVar5 = FUN__text__005f5f04(param_1,lVar4 + param_3,param_3,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (((lVar5 == 0) && (lVar5 = FUN__text__005f626c(param_1,lVar4,param_3,0), lVar5 == 0)) && // [自动静态注释] 条件判断/分支
       (lVar5 = FUN__text__005f626c(param_1,lVar4 + param_3,param_3,1), lVar5 == 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = FUN__text__005f597c(lVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005f59c4(lVar5,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
  lVar4 = FUN__text__005f599c(lVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + lVar4;
  return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


