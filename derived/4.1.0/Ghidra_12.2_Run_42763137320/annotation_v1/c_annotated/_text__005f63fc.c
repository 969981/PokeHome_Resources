/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004F63FC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f63fc; name: FUN_.text__005f63fc
 */


undefined8 FUN__text__005f63fc(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  cVar3 = FUN__text__005f7e10(param_1[3]); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (cVar3 != -1) { // [自动静态注释] 条件判断/分支
    uVar4 = FUN__text__005f7e10(*(undefined4 *)(param_1[2] + (long)cVar3 * 4)); // [自动静态注释] 调用尚未恢复正式名称的函数
    cVar3 = cVar3 + ((char)uVar4 >> 5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar2 = (int)cVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = (long)cVar3 + -3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uint)lVar6 < 5) { // [自动静态注释] 条件判断/分支
      lVar6 = *(long *)(lVar6 * 8 + 0x757d90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar6 = -0x81; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar1 = (ulong)(((uint)uVar4 & 0x1f) >> (ulong)(8U - iVar2 & 0x1f)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (7 < iVar2) { // [自动静态注释] 条件判断/分支
      uVar1 = uVar4 & 0x1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar4 = (uVar1 | (long)(iVar2 + -3) << 5) + lVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar4 < (ulong)param_1[4] && *param_1 != 0) { // [自动静态注释] 条件判断/分支
      uVar5 = FUN__text__005f5c8c(*param_1 + uVar4 * 0x20); // [自动静态注释] 调用尚未恢复正式名称的函数
      return uVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


