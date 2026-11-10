/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003C2DF0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c2df0; name: FUN_.text__004c2df0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004c2df0(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined7 uStack_4f; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar3 = *(long **)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *_DAT_008a4b70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(uint *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar5 = plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 == 0) { // [自动静态注释] 条件判断/分支
LAB__text__004c2e7c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (plVar5 != plVar3 + (ulong)uVar1 * 6) { // [自动静态注释] 条件判断/分支
      for (plVar5 = (long *)plVar5[4]; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) { // [自动静态注释] 循环/迭代
        if (((plVar5[3] == param_2) && (*(char *)(plVar5 + 5) == -0x70)) && // [自动静态注释] 条件判断/分支
           ((*(char *)((long)plVar5 + 0x2d) != '\0' && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (((*(byte *)(plVar5 + 7) >> 2 & 1) == 0 && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             (*(int *)((long)plVar5 + 0x34) <= (int)(uint)uVar2)))))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          local_48 = *(undefined4 *)(plVar5 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          _local_50 = CONCAT71((int7)((ulong)plVar5[5] >> 8),0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          FUN__text__004c20f0(param_1,param_2,&local_50,*(int *)((long)plVar5 + 0x34),1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar4 = (ulong)uVar1 * 0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (((*(long *)(param_2 + 0x40) == *plVar5) && (*(long *)(param_2 + 0x10) == plVar5[1])) && // [自动静态注释] 条件判断/分支
         (*(int *)(param_2 + 0x2c) == (int)plVar5[2])) goto LAB__text__004c2e7c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      plVar5 = plVar5 + 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar4 = lVar4 + -0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar4 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


