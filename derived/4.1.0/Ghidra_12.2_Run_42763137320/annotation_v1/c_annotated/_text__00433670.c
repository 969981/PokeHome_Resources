/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00333670
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00433670; name: FUN_.text__00433670
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00433670(long param_1,ulong param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char local_14 [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_14[0] = '\0'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = FUN__text__00433760((long *)(param_1 + 0x38),param_2,local_14); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((((lVar4 != 0) && (local_14[0] == '\0')) && // [自动静态注释] 条件判断/分支
      (iVar3 = FUN__text__004345d0(*_DAT_008a45f0,param_2,param_1), iVar3 != 1)) && // [自动静态注释] 调用尚未恢复正式名称的函数
     (uVar5 = *(uint *)(param_1 + 0x40), uVar5 != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar4 = *(long *)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_2 = param_2 & 0xffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      iVar1 = iVar3 + (uVar6 >> 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar7 = *(ulong *)(lVar4 + (long)iVar1 * 8) & 0xffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar7 == param_2) { // [自动静态注释] 条件判断/分支
        uVar5 = uVar5 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((long)iVar1 < (long)(ulong)uVar5) { // [自动静态注释] 条件判断/分支
          __dest = (void *)(lVar4 + (long)iVar1 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          memmove(__dest,(void *)((long)__dest + 8), // [自动静态注释] 内存复制、清零或移动
                  (ulong)(((int)lVar4 + uVar5 * 8) - (int)__dest) & 0xfffffff8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar5 = *(int *)(param_1 + 0x40) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *(uint *)(param_1 + 0x40) = uVar5;
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      if (uVar7 < param_2) { // [自动静态注释] 条件判断/分支
        iVar3 = iVar1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      uVar2 = uVar6 - (uVar7 < param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = uVar2 >> 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (1 < uVar2); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


