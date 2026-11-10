/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00398740
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00498740; name: FUN_.text__00498740
 */


void FUN__text__00498740(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((*(long *)(param_1 + 0x40) != 0) && (*(int *)(param_1 + 0x38) != 0)) { // [自动静态注释] 条件判断/分支
    lVar4 = *(long *)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar3 = *(long *)(lVar4 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((*(long *)(lVar3 + 8) != 0) && // [自动静态注释] 条件判断/分支
         (iVar1 = FUN__text__004961d0(*(long *)(lVar3 + 8),param_1), iVar1 != 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar2 = *(undefined8 *)(lVar3 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(lVar3 + 8) = 0;
        FUN__text__0049a1f0(*(undefined8 *)(param_1 + 0x40),param_1,lVar3,uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      lVar4 = lVar4 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar4 != *(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x38) * 0x10); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 0x40) = param_2;
  if ((param_2 != 0) && (*(int *)(param_1 + 0x38) != 0)) { // [自动静态注释] 条件判断/分支
    lVar4 = *(long *)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      FUN__text__00498810(*(undefined8 *)(lVar4 + 8),param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar4 = lVar4 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar4 != *(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x38) * 0x10); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


