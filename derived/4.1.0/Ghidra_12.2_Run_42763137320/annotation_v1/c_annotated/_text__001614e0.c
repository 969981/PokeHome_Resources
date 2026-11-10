/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000614E0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001614e0; name: FUN_.text__001614e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001614e0(long param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *__src; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar7 = (long *)FUN__text__003e9674(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar5 = _DAT_0089fa50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar4 = _DAT_0089fa48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3 = _DAT_0089f8a0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar2 = _DAT_0089f898; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar7 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      if (((*pbVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar4), iVar6 != 0)) { // [自动静态注释] 条件判断/分支
        if (((*pbVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar2), iVar6 != 0)) { // [自动静态注释] 条件判断/分支
          *puVar3 = 0;
          __cxa_guard_release(pbVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        *puVar5 = puVar3;
        __cxa_guard_release(pbVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (puVar8 == puVar5) { // [自动静态注释] 条件判断/分支
LAB__text__00161584: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        lVar11 = *(long *)(param_1 + 0xaf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar1 = *(undefined8 **)(lVar11 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar9 = *(long *)(lVar11 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar8 = puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (lVar9 == 0) { // [自动静态注释] 条件判断/分支
LAB__text__001615c4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          puVar1 = puVar1 + lVar9 * 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (puVar8 != puVar1) { // [自动静态注释] 条件判断/分支
            if ((puVar8 != (undefined8 *)0x0) && (__src = puVar8 + 2, __src != puVar1)) { // [自动静态注释] 条件判断/分支
              memmove(puVar8,__src,(long)puVar1 - (long)__src); // [自动静态注释] 内存复制、清零或移动
              lVar9 = *(long *)(lVar11 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } // [自动静态注释] 作用域/控制流边界
            *(long *)(lVar11 + 0x48) = lVar9 + -1;
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          lVar10 = lVar9 << 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          do { // [自动静态注释] 循环/迭代
            if (plVar7 == (long *)*puVar8) goto LAB__text__001615c4; // [自动静态注释] 条件判断/分支
            puVar8 = puVar8 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            lVar10 = lVar10 + -0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while (lVar10 != 0); // [自动静态注释] 循环/迭代
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        do { // [自动静态注释] 循环/迭代
          puVar8 = (undefined8 *)*puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (puVar8 != puVar5 && puVar8 != (undefined8 *)0x0); // [自动静态注释] 循环/迭代
        if (puVar8 != (undefined8 *)0x0) goto LAB__text__00161584; // [自动静态注释] 条件判断/分支
      } // [自动静态注释] 作用域/控制流边界
      plVar7 = (long *)FUN__text__006c0e70(plVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
    } while (plVar7 != (long *)0x0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(*(long *)(param_1 + 0xaf0) + 0x48) == 0) { // [自动静态注释] 条件判断/分支
    *(undefined1 *)(param_1 + 0xc20) = 1;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00162d44(*(undefined8 *)(param_1 + 0x260)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00162d44(*(undefined8 *)(param_1 + 0x260)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00162d44(*(undefined8 *)(param_1 + 0x268)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00162d44(*(undefined8 *)(param_1 + 0x268)); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


