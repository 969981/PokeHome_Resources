/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004F6664
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f6664; name: FUN_.text__005f6664
 */


void FUN__text__005f6664(long *param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar5 = FUN__text__005f598c(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (uVar5 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__005f5c28(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    cVar4 = FUN__text__005f7e10(uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = (uint)cVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = uVar5 & (uint)~(-1 << (ulong)(uVar2 & 0x1f)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = uVar5 << ((ulong)(5 - uVar2) & 0x3f); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (4 < (int)uVar2) { // [自动静态注释] 条件判断/分支
      uVar1 = uVar5 >> ((ulong)(uVar2 - 5) & 0x3f); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    cVar4 = cVar4 + ((char)uVar1 >> 5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar3 = (int)cVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = (long)cVar4 + -3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uint)lVar6 < 5) { // [自动静态注释] 条件判断/分支
      lVar6 = *(long *)(lVar6 * 8 + 0x757d90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar6 = -0x81; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar5 = (ulong)(((uint)uVar1 & 0x1f) >> (ulong)(8U - iVar3 & 0x1f)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (7 < iVar3) { // [自动静态注释] 条件判断/分支
      uVar5 = uVar1 & 0x1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar5 = (uVar5 | (long)(iVar3 + -3) << 5) + lVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (((ulong)param_1[4] <= uVar5 || *param_1 == 0) || // [自动静态注释] 条件判断/分支
       (lVar6 = FUN__text__005f5c8c(*param_1 + uVar5 * 0x20), lVar6 == 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar5 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)(param_1[2] + uVar5) =
           *(uint *)(param_1[2] + uVar5) & (1 << (ulong)((uint)uVar1 & 0x1f) ^ 0xffffffffU);
      if (*(int *)(param_1[2] + uVar5) == 0) { // [自动静态注释] 条件判断/分支
        param_1[3] = param_1[3] & (1L << ((long)(int)uVar2 & 0x3fU) ^ 0xffffffffffffffffU); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


