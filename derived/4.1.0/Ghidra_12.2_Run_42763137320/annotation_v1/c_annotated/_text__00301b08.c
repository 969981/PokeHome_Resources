/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00201B08
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00301b08; name: FUN_.text__00301b08
 */


undefined8 FUN__text__00301b08(long param_1,long *param_2,long *param_3,uint param_4,uint param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar10 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar10 == 0) { // [自动静态注释] 条件判断/分支
    lVar11 = param_1 + (ulong)param_4 * 0x5fa0 + 0x58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = lVar11 + (ulong)param_5 * 0x330; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar13 = (undefined4 *)(lVar6 + 0x2e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar1 = *(int *)(lVar6 + 0x2e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar1 < 0) { // [自动静态注释] 条件判断/分支
LAB__text__00301bec: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar6 = lVar11 + (ulong)param_5 * 0x330; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__00306b04(lVar10,lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar3 = *(undefined8 *)(lVar6 + 0x2a0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(lVar10 + 0x60) = *(undefined8 *)(lVar6 + 0x298);
      *(undefined8 *)(lVar10 + 0x68) = uVar3;
      uVar3 = *(undefined8 *)(lVar6 + 0x2a8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar8 = *(undefined8 *)(lVar6 + 0x2b0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar9 = *(undefined8 *)(lVar6 + 0x2c0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(lVar10 + 0x80) = *(undefined8 *)(lVar6 + 0x2b8);
      *(undefined8 *)(lVar10 + 0x88) = uVar9;
      *(undefined8 *)(lVar10 + 0x70) = uVar3;
      *(undefined8 *)(lVar10 + 0x78) = uVar8;
      uVar3 = *(undefined8 *)(lVar6 + 0x2d0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar8 = *(undefined8 *)(lVar6 + 0x2d8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar9 = *(undefined8 *)(lVar6 + 0x2e0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(lVar10 + 0x90) = *(undefined8 *)(lVar6 + 0x2c8);
      *(undefined8 *)(lVar10 + 0x98) = uVar3;
      *(undefined8 *)(lVar10 + 0xa0) = uVar8;
      *(undefined8 *)(lVar10 + 0xa8) = uVar9;
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      goto LAB__text__00301c4c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (iVar1 != 0) goto LAB__text__00301b88; // [自动静态注释] 条件判断/分支
LAB__text__00301c80: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar10 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar10 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    lVar11 = lVar11 + (ulong)param_5 * 0x330; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__005fc068(lVar11,*(undefined8 *)(lVar10 + 0x58)); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar3 = *(undefined8 *)(lVar10 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar11 + 0x298) = *(undefined8 *)(lVar10 + 0x60);
    *(undefined8 *)(lVar11 + 0x2a0) = uVar3;
    uVar3 = *(undefined8 *)(lVar10 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar8 = *(undefined8 *)(lVar10 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar9 = *(undefined8 *)(lVar10 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar11 + 0x2a8) = *(undefined8 *)(lVar10 + 0x70);
    *(undefined8 *)(lVar11 + 0x2c0) = uVar8;
    *(undefined8 *)(lVar11 + 0x2b8) = uVar3;
    *(undefined8 *)(lVar11 + 0x2b0) = uVar9;
    uVar3 = *(undefined8 *)(lVar10 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar8 = *(undefined8 *)(lVar10 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar9 = *(undefined8 *)(lVar10 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar11 + 0x2c8) = *(undefined8 *)(lVar10 + 0x90);
    *(undefined8 *)(lVar11 + 0x2e0) = uVar8;
    *(undefined8 *)(lVar11 + 0x2d8) = uVar3;
    *(undefined8 *)(lVar11 + 0x2d0) = uVar9;
    uVar2 = FUN__text__003065f8(lVar10); // [自动静态注释] 调用尚未恢复正式名称的函数
    *puVar13 = uVar2;
    uVar3 = FUN__text__00637404(*(undefined8 *)(lVar10 + 0x58)); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(lVar11 + 0x2f0) = uVar3;
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar4 = FUN__text__00306588(*param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar4 & 1) == 0) { // [自动静态注释] 条件判断/分支
      lVar10 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar10 != 0) { // [自动静态注释] 条件判断/分支
        plVar12 = (long *)(lVar10 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (**(code **)(*plVar12 + 0x10))(plVar12); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        (**(code **)(*plVar12 + 0x10))(plVar12); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      uVar4 = FUN__text__00306588(lVar10); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (((uVar4 & 1) == 0) && // [自动静态注释] 条件判断/分支
         (lVar11 = FUN__text__00637404(*(undefined8 *)(lVar10 + 0x58)), lVar11 == 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar4 = FUN__text__003065f8(lVar10); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar5 = FUN__text__003067fc(lVar10); // [自动静态注释] 调用尚未恢复正式名称的函数
        param_1 = param_1 + (uVar4 & 0xffffffff) * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((uVar5 & 1) == 0) { // [自动静态注释] 条件判断/分支
          uVar7 = 0xfe0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar7 = 0xfe4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *(int *)(param_1 + (ulong)(uVar7 | 0x700000)) =
             *(int *)(param_1 + (ulong)(uVar7 | 0x700000)) + 1;
      } // [自动静态注释] 作用域/控制流边界
      plVar12 = (long *)(lVar10 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(*plVar12 + 0x18))(plVar12); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      (**(code **)(*plVar12 + 0x18))(plVar12); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    uVar3 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar12 = (long *)(lVar10 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(*plVar12 + 0x10))(plVar12); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar11 = param_1 + (ulong)param_4 * 0x5fa0 + 0x58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = lVar11 + (ulong)param_5 * 0x330; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar1 = *(int *)(lVar6 + 0x2e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar13 = (undefined4 *)(lVar6 + 0x2e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar1 < 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*plVar12 + 0x10))(plVar12); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if ((param_4 < 300) && (param_5 < 0x1e)) { // [自动静态注释] 条件判断/分支
        (**(code **)(*plVar12 + 0x10))(plVar12); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        goto LAB__text__00301bec; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
LAB__text__00301c4c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      plVar12 = (long *)(lVar10 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(*plVar12 + 0x18))(plVar12); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar4 = FUN__text__00306588(lVar10); // [自动静态注释] 调用尚未恢复正式名称的函数
      (**(code **)(*plVar12 + 0x18))(plVar12); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if ((uVar4 & 1) != 0) goto LAB__text__00301c80; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      (**(code **)(*plVar12 + 0x18))(plVar12); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (iVar1 == 0) goto LAB__text__00301c80; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
LAB__text__00301b88: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


