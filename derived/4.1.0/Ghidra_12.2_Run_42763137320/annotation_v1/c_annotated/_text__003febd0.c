/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002FEBD0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003febd0; name: FUN_.text__003febd0
 */


void FUN__text__003febd0(long param_1,ulong *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = *(uint *)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar4 = uVar2 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar6 = iVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    while( true ) { // [自动静态注释] 循环/迭代
      iVar3 = iVar6 - iVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar3 < 0) { // [自动静态注释] 条件判断/分支
        iVar3 = iVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      uVar1 = iVar5 + (iVar3 >> 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar7 = *(ulong **)(*(long *)(param_1 + 0x28) + (ulong)uVar1 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uint)puVar7[4] <= (uint)param_2[4]) break; // [自动静态注释] 条件判断/分支
LAB__text__003fec00: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      iVar6 = uVar1 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar6 < iVar5) goto LAB__text__003fec98; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    if ((uint)param_2[4] <= (uint)puVar7[4]) { // [自动静态注释] 条件判断/分支
      if (*puVar7 < *param_2) goto LAB__text__003fec00; // [自动静态注释] 条件判断/分支
      if (*puVar7 <= *param_2) { // [自动静态注释] 条件判断/分支
        if (param_2[1] < puVar7[1]) goto LAB__text__003fec00; // [自动静态注释] 条件判断/分支
        if (param_2[1] <= puVar7[1]) { // [自动静态注释] 条件判断/分支
          if (uVar1 + 1 < uVar2) { // [自动静态注释] 条件判断/分支
            __dest = (void *)(*(long *)(param_1 + 0x28) + (ulong)uVar1 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            memmove(__dest,(void *)((long)__dest + 8),(ulong)((uVar2 + ~uVar1) * 8)); // [自动静态注释] 内存复制、清零或移动
            iVar4 = *(int *)(param_1 + 0x30) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          *(int *)(param_1 + 0x30) = iVar4;
          break; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    iVar5 = uVar1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (iVar5 <= iVar6); // [自动静态注释] 循环/迭代
LAB__text__003fec98: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined4 *)(param_2 + 4) = 0xffffffff;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


