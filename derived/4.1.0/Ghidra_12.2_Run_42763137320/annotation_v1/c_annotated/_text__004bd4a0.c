/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003BD4A0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004bd4a0; name: FUN_.text__004bd4a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__004bd4a0(long param_1,int *param_2,undefined8 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *pvVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0x50) == 0) { // [自动静态注释] 条件判断/分支
    iVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::LockMutex((MutexType *)(param_1 + 0x28)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    puVar1 = _DAT_008a45d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(int *)(param_1 + 0x48) == 0) { // [自动静态注释] 条件判断/分支
      iVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      iVar4 = *(int *)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      while (iVar4 != 0) { // [自动静态注释] 循环/迭代
        piVar6 = *(int **)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *param_3 = *(undefined8 *)(piVar6 + 2);
        iVar4 = *piVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (iVar4 != 0) { // [自动静态注释] 条件判断/分支
          if (*(long *)(param_1 + 0xa0) != 0) { // [自动静态注释] 条件判断/分支
            FUN__text__0040c060(); // [自动静态注释] 调用尚未恢复正式名称的函数
            iVar4 = *piVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          *(int *)(param_1 + 0x90) = iVar4;
          *(int *)(param_1 + 0x94) = piVar6[1];
          *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(piVar6 + 2);
          piVar5 = *(int **)(piVar6 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(int **)(param_1 + 0xa0) = piVar5;
          if (piVar5 != (int *)0x0) { // [自动静态注释] 条件判断/分支
            *piVar5 = *piVar5 + 1;
          } // [自动静态注释] 作用域/控制流边界
          *param_2 = piVar6[1];
          pvVar7 = *(void **)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          FUN__text__004be9b0(pvVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
          uVar3 = *(uint *)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (1 < uVar3) { // [自动静态注释] 条件判断/分支
            memmove(pvVar7,(void *)((long)pvVar7 + 0x18),(ulong)(uVar3 * 0x18 - 0x18)); // [自动静态注释] 内存复制、清零或移动
            uVar3 = *(uint *)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          *(uint *)(param_1 + 0x20) = uVar3 - 1;
          break; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        pvVar7 = *(void **)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        FUN__text__004be9b0(pvVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar3 = *(uint *)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (1 < uVar3) { // [自动静态注释] 条件判断/分支
          memmove(pvVar7,(void *)((long)pvVar7 + 0x18),(ulong)(uVar3 * 0x18 - 0x18)); // [自动静态注释] 内存复制、清零或移动
          uVar3 = *(uint *)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        uVar2 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(uint *)(param_1 + 0x20) = uVar3 - 1;
        FUN__text__0048d2a0(uVar2,*(undefined4 *)(param_1 + 0x6c),0,*param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
        iVar4 = *(int *)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      iVar4 = *(int *)(param_1 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar4 == 0) { // [自动静态注释] 条件判断/分支
        *(undefined4 *)(param_1 + 0x48) = 2;
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x28)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return iVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


