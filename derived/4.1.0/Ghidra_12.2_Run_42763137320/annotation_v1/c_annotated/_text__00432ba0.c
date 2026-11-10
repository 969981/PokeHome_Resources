/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00332BA0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00432ba0; name: FUN_.text__00432ba0
 */


undefined8 FUN__text__00432ba0(undefined8 *param_1,int *param_2,undefined1 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  void *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *pvVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *pvVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  cVar1 = *(char *)((long)param_2 + 0xd); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar7 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pvVar3 = (void *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pvVar8 = pvVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar4 != 0) { // [自动静态注释] 条件判断/分支
    pvVar8 = (void *)((long)pvVar3 + (ulong)uVar4 * 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      __dest = (void *)((long)pvVar3 + lVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(int *)((long)__dest + 8) == param_2[1]) { // [自动静态注释] 条件判断/分支
        uVar4 = uVar4 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (__dest < (void *)((long)pvVar3 + (ulong)uVar4 * 0x18)) { // [自动静态注释] 条件判断/分支
          memmove(__dest,(void *)((long)__dest + 0x18),(ulong)(uVar4 * 0x18 - (int)lVar5)); // [自动静态注释] 内存复制、清零或移动
          uVar4 = *(int *)(param_1 + 1) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          pvVar3 = (void *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *(uint *)(param_1 + 1) = uVar4;
        uVar2 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pvVar8 = __dest; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto joined_r0x00432c80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      lVar5 = lVar5 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while ((ulong)uVar4 * 0x18 != lVar5); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
joined_r0x00432c80: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((cVar1 == '\b') || (iVar7 == 0)) { // [自动静态注释] 条件判断/分支
    *param_3 = 0;
    return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar6 = (ulong)CONCAT14(cVar1,iVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar7 = (int)((long)pvVar8 - (long)pvVar3 >> 3) * -0x55555555; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((iVar7 < (int)uVar4) && (*(uint5 *)((long)pvVar3 + (long)iVar7 * 0x18) == uVar6)) || // [自动静态注释] 条件判断/分支
     ((0 < iVar7 && iVar7 <= (int)uVar4 && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      (*(uint5 *)((long)pvVar3 + (ulong)(iVar7 - 1) * 0x18) == uVar6)))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *param_3 = 1;
    return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *param_3 = 0;
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


