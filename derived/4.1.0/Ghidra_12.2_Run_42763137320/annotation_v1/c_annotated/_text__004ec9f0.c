/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003EC9F0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ec9f0; name: FUN_.text__004ec9f0
 */


int FUN__text__004ec9f0(long param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ushort uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(int *)(param_1 + 0x90) = param_2;
  iVar2 = FUN__text__004f47e8(*(undefined8 *)(param_1 + 0x78)); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = (**(code **)(**(long **)(param_1 + 0x78) + 0x280))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 != 0) { // [自动静态注释] 条件判断/分支
    uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar5 = iVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      uVar4 = FUN__text__004f41b8(*(undefined8 *)(param_1 + 0x78),uVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
      iVar3 = FUN__text__004efda0(uVar4,iVar2 + param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar6 = uVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar3 <= iVar5) { // [自动静态注释] 条件判断/分支
        iVar3 = iVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      iVar5 = iVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar1 != uVar6); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return iVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


