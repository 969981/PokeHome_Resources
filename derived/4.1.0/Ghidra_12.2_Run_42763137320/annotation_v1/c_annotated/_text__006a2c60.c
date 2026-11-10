/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005A2C60
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a2c60; name: FUN_.text__006a2c60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006a2c60(long param_1,undefined8 param_2,long param_3,long param_4,long param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        long *param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  void *pvVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_3 + 0x38);
  uVar8 = *(undefined8 *)(param_3 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x40) = uVar8;
  piVar4 = _DAT_008a6990; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar13 = param_6[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(param_3 + 0x58) == 0) { // [自动静态注释] 条件判断/分支
    *(int *)(param_6 + 1) = (int)param_6[1] + 1;
    if (lVar13 != 0) goto LAB__text__006a2d50; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (lVar13 == 0) { // [自动静态注释] 条件判断/分支
      __s = (void *)param_6[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_6 = (long)__s;
      __n = (long)*piVar4 * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(int *)((long)param_6 + 0xc) = *piVar4;
      pvVar1 = (void *)((long)__s + __n); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      memset(__s,0,__n); // [自动静态注释] 内存复制、清零或移动
      lVar13 = (long)pvVar1 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(void **)pvVar1 = pvVar1;
      *(void **)((long)pvVar1 + 8) = pvVar1;
      param_6[2] = (long)pvVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__006a4430(lVar13,(long)pvVar1 + 0x40); // [自动静态注释] 调用尚未恢复正式名称的函数
      param_6[4] = lVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(int *)(param_6 + 1) = (int)param_6[1] + 1;
LAB__text__006a2d50: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar9 = (long *)(*(long *)(lVar13 + 0x20) + (long)*(int *)(lVar13 + 0x28) * 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(lVar13 + 0x28) = *(int *)(lVar13 + 0x28) + 1;
    *(int *)(param_6 + 3) = (int)param_6[3] + 1;
    lVar13 = param_6[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(plVar9 + 9) = 0;
    *(undefined4 *)(plVar9 + 0xc) = 0;
    plVar9[2] = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar11 = *plVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar9[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar9[6] = lVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar10 = (long *)param_6[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *plVar9 = *plVar10;
    *(long **)(lVar11 + 8) = plVar10;
    *(long **)(*plVar10 + 8) = plVar9;
    *plVar10 = lVar11;
    *(long **)(*param_6 + (long)(int)param_6[1] * 8 + -8) = plVar9;
  } // [自动静态注释] 作用域/控制流边界
  local_78 = param_6 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar9 = param_6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar13 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(*(long *)(param_3 + 0x18) + 0x18) != 0) { // [自动静态注释] 条件判断/分支
    lVar13 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar8 = FUN__text__006c1d80(*(long *)(param_3 + 0x18),lVar13,param_2,param_1,param_6); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(param_1 + 0x18) = uVar8;
  if (param_5 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__006b2090(uVar8,param_5); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  puVar3 = _DAT_008a6970; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar7 = _DAT_008a6960; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar13 = (*(code *)*_DAT_008a6960)(0x10,4,*_DAT_008a6970); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar13 != 0) { // [自动静态注释] 条件判断/分支
    *(long *)lVar13 = lVar13;
    *(long *)(lVar13 + 8) = lVar13;
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 0x20) = lVar13;
  lVar13 = *(long *)(param_3 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  for (lVar11 = *(long *)(lVar13 + 8); lVar11 != lVar13; lVar11 = *(long *)(lVar11 + 8)) { // [自动静态注释] 循环/迭代
    uVar8 = *(undefined8 *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = *(undefined8 *)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = (*(code *)*puVar7)(0x38,4,*puVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__0069e480(lVar6,lVar11 + -8,uVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__0069e6a0(uVar2,lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (param_4 != 0) { // [自动静态注释] 条件判断/分支
    plVar10 = *(long **)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (((*_DAT_008a52b8 & 1) == 0) && // [自动静态注释] 条件判断/分支
       (iVar5 = __cxa_guard_acquire(_DAT_008a52b8), puVar7 = _DAT_0089f8a0, iVar5 != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (((*_DAT_0089f898 & 1) == 0) && (iVar5 = __cxa_guard_acquire(_DAT_0089f898), iVar5 != 0)) { // [自动静态注释] 条件判断/分支
        *puVar7 = 0;
        __cxa_guard_release(_DAT_0089f898); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *_DAT_008a52c0 = puVar7;
      __cxa_guard_release(_DAT_008a52b8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (plVar10 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      puVar7 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (puVar7 != _DAT_008a52c0) { // [自动静态注释] 条件判断/分支
        do { // [自动静态注释] 循环/迭代
          puVar7 = (undefined8 *)*puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (puVar7 != _DAT_008a52c0 && puVar7 != (undefined8 *)0x0); // [自动静态注释] 循环/迭代
        if (puVar7 == (undefined8 *)0x0) goto LAB__text__006a2ef0; // [自动静态注释] 条件判断/分支
      } // [自动静态注释] 作用域/控制流边界
      plVar10 = plVar10 + 0x1b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar13 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar12 = (long *)(param_4 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *plVar10 = *plVar12;
      *(long **)(lVar13 + 8) = plVar12;
      *(long **)(*plVar12 + 8) = plVar10;
      *plVar12 = lVar13;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
LAB__text__006a2ef0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*local_78 != 0) { // [自动静态注释] 条件判断/分支
    iVar5 = (int)*plVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((0 < iVar5) && (iVar5 <= *_DAT_008a6990)) { // [自动静态注释] 条件判断/分支
      uVar8 = *(undefined8 *)(*param_6 + (ulong)(iVar5 - 1) * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__006a2890(param_1,uVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  iVar5 = (int)*plVar9 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((int)*plVar9 < 1) { // [自动静态注释] 条件判断/分支
    iVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(int *)plVar9 = iVar5;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


