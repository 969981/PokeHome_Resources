/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001DD090
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002dd090; name: FUN_.text__002dd090
 */


void FUN__text__002dd090(long *param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__src; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  __src = (void *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (__src == (void *)*param_1) { // [自动静态注释] 条件判断/分支
    uVar2 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar8 = param_1[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar2 < uVar8) { // [自动静态注释] 条件判断/分支
      lVar4 = (long)(uVar8 - uVar2) >> 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar7 = lVar4 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (-2 < lVar4) { // [自动静态注释] 条件判断/分支
        lVar7 = lVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      __dest = (void *)((lVar7 >> 1) * 8 + (long)__src); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar2 - (long)__src != 0) { // [自动静态注释] 条件判断/分支
        memmove(__dest,__src,uVar2 - (long)__src); // [自动静态注释] 内存复制、清零或移动
        __src = (void *)param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      param_1[1] = (long)__dest; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[2] = (long)((long)__src + (lVar7 >> 1) * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      puVar12 = (undefined8 *)param_1[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar7 = (long)(uVar8 - (long)__src) >> 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar8 - (long)__src == 0) { // [自动静态注释] 条件判断/分支
        lVar7 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      lVar4 = (**(code **)(*(long *)*puVar12 + 0x10))((long *)*puVar12,lVar7 * 8,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1 = (undefined8 *)(lVar4 + (lVar7 * 2 + 6U & 0xfffffffffffffff8)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = param_1[2] - param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar5 = puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar2 != 0) { // [自动静态注释] 条件判断/分支
        uVar8 = uVar3 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar11 = *(long *)(uVar8 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar5 = (undefined8 *)((long)puVar1 + (uVar2 & 0xfffffffffffffff8)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar9 = ((long)uVar2 >> 3) << 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar6 = (undefined8 *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar10 = puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          if (lVar11 == 0x10) goto LAB__text__002dd24c; // [自动静态注释] 条件判断/分支
          lVar9 = lVar9 + -8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)((uVar8 | 0x18) + lVar11 * 8) = *puVar12;
          *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
          *puVar10 = *puVar6;
          lVar11 = *(long *)(uVar8 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(long *)(uVar8 + 0x98) = lVar11;
          puVar6 = puVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar10 = puVar10 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (lVar9 != 0); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
      lVar9 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_1 = lVar4;
      param_1[1] = (long)puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar11 = param_1[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[2] = (long)puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[3] = lVar4 + lVar7 * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar9 != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)*puVar12 + 0x18))((long *)*puVar12,lVar9,lVar11 - lVar9,0x10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = uVar3 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar3 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
    lVar7 = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)param_1[4];
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    *(undefined8 *)(lVar7 + -8) = *param_2;
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    param_1[1] = param_1[1] + -8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
LAB__text__002dd24c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
} // [自动静态注释] 作用域/控制流边界


