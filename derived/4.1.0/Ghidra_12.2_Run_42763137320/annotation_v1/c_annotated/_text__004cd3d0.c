/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003CD3D0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cd3d0; name: FUN_.text__004cd3d0
 */


void FUN__text__004cd3d0(long param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar2 = *(int **)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *(uint *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar1 = piVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar3 == 0) { // [自动静态注释] 条件判断/分支
LAB__text__004cd41c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (piVar1 != piVar2 + uVar3) { // [自动静态注释] 条件判断/分支
      uVar3 = uVar3 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (piVar1 < piVar2 + uVar3) { // [自动静态注释] 条件判断/分支
        memmove(piVar1,piVar1 + 1,(ulong)(uint)((int)(piVar2 + uVar3) - (int)piVar1) & 0xfffffffc); // [自动静态注释] 内存复制、清零或移动
        uVar3 = *(int *)(param_1 + 0x10) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(uint *)(param_1 + 0x10) = uVar3;
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar4 = (ulong)uVar3 << 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (*piVar1 == param_2) goto LAB__text__004cd41c; // [自动静态注释] 条件判断/分支
      piVar1 = piVar1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar4 = lVar4 + -4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar4 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


