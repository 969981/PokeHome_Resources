/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004A8FBC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a8fbc; name: FUN_.text__005a8fbc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a8fbc(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *pvVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (DAT_00b11150 == (void *)0x0) { // [自动静态注释] 条件判断/分支
    if (*(char *)(param_1 + 0xad) == '\0') { // [自动静态注释] 条件判断/分支
      plVar8 = *(long **)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar9 = *(undefined8 *)(param_1 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pvVar2 = (void *)(**(code **)(*plVar8 + 0x10))(plVar8,uVar9,0x1000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar6 = *(long *)(param_1 + 0x140); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(void **)(param_1 + 0x140) = pvVar2;
      if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(**(long **)(param_1 + 0x148) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  (*(long **)(param_1 + 0x148),lVar6,*(undefined8 *)(param_1 + 0x150), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                   *(undefined8 *)(param_1 + 0x158));
        pvVar2 = *(void **)(param_1 + 0x140); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(undefined8 *)(param_1 + 0x158) = 0x1000;
      *(long **)(param_1 + 0x148) = plVar8;
      *(undefined8 *)(param_1 + 0x150) = uVar9;
      nv::InitializeGraphics(pvVar2,*(ulong *)(param_1 + 0x78)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      plVar8 = *(long **)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar6 = *_DAT_008a5668; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long **)(lVar6 + 0x10) = plVar8;
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(param_1 + 0x80);
      plVar8 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,*(undefined8 *)(param_1 + 0x80),8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long **)(lVar6 + 0x18) = plVar8;
      if (plVar8 == (long *)0x0) { // [自动静态注释] 条件判断/分支
        (**(code **)(**(long **)(lVar6 + 0x10) + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        plVar8 = *(long **)(lVar6 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__005f6b94(plVar8,plVar8 + 0x16,*(long *)(param_1 + 0x80) + -0xb0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)(plVar8 + 0x15) = 0;
      lVar5 = _DAT_0089f3b0 + 0xe8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *plVar8 = _DAT_0089f3b0 + 0x10;
      plVar8[1] = lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long **)(lVar6 + 8) = plVar8;
      DAT_00b11148 = plVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      nv::SetGraphicsAllocator // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (FUN__text__005a9ae0,(_func_void_void_ptr_void_ptr *)&LAB__text__005a9b60, // [自动静态注释] 调用尚未恢复正式名称的函数
                 FUN__text__005a9ba0,plVar8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar7 = *(ulong *)(param_1 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      DAT_00b11150 = (void *)aligned_alloc(0x1000,uVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      nv::InitializeGraphics(DAT_00b11150,uVar7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      nv::SetGraphicsAllocator // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (FUN__text__005a9ae0,(_func_void_void_ptr_void_ptr *)&LAB__text__005a9b60, // [自动静态注释] 调用尚未恢复正式名称的函数
                 FUN__text__005a9ba0,(void *)0x0); // [自动静态注释] 调用尚未恢复正式名称的函数
      nv::SetGraphicsDevtoolsAllocator // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (FUN__text__005a9ae0,(_func_void_void_ptr_void_ptr *)&LAB__text__005a9b60, // [自动静态注释] 调用尚未恢复正式名称的函数
                 FUN__text__005a9ba0,(void *)0x0); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  nn::vi::Initialize(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__006f5db0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005a7a80(); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar8 = _DAT_008a0228; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005a9c54(*_DAT_008a0228,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar7 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = uVar7 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar7 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
    lVar6 = uVar7 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar9 = *(undefined8 *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar11 = *(long **)(*plVar8 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar5 = *(long *)(*plVar8 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long **)(lVar6 + *(long *)(uVar7 + 0x98) * 8) = plVar11;
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
    lVar3 = (**(code **)(*plVar11 + 0x10))(plVar11,0x278,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*plVar11 + 0xb8))(plVar11); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__005ace68(lVar3,uVar9,*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x6c)) // [自动静态注释] 调用尚未恢复正式名称的函数
    ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(long **)(lVar3 + 8) = plVar11;
    *(long *)(lVar3 + 0x10) = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 0x278;
    *(undefined8 *)(lVar3 + 0x20) = 8;
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar4 = *(long *)(lVar5 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(long *)(lVar5 + 8) = lVar3;
    if (*(long *)(uVar7 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
      uVar9 = *(undefined8 *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar11 = *(long **)(*plVar8 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar1 = *(long **)(*plVar8 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long **)(lVar6 + *(long *)(uVar7 + 0x98) * 8) = plVar11;
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
      lVar5 = (**(code **)(*plVar11 + 0x10))(plVar11,0x278,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar5 == 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*plVar11 + 0xb8))(plVar11); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__005ace68(lVar5,uVar9,*(undefined8 *)(param_1 + 0x50), // [自动静态注释] 调用尚未恢复正式名称的函数
                          *(undefined4 *)(param_1 + 0x5c));
      *(long **)(lVar5 + 8) = plVar11;
      *(long *)(lVar5 + 0x10) = lVar5;
      *(undefined8 *)(lVar5 + 0x18) = 0x278;
      *(undefined8 *)(lVar5 + 0x20) = 8;
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar3 = *plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *plVar1 = lVar5;
      FUN__text__005a9c54(*plVar8,1); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (*(long *)(uVar7 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
        lVar5 = *plVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar9 = *(undefined8 *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar8 = *(long **)(lVar5 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar11 = *(long **)(lVar5 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar10 = **(undefined8 **)(lVar5 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long **)(lVar6 + *(long *)(uVar7 + 0x98) * 8) = plVar8;
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
        lVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,0x160,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (lVar6 == 0) { // [自动静态注释] 条件判断/分支
          (**(code **)(*plVar8 + 0xb8))(plVar8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__005ad65c(lVar6,uVar9,uVar10,*(undefined8 *)(param_1 + 0x90),4); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(long **)(lVar6 + 8) = plVar8;
        *(long *)(lVar6 + 0x10) = lVar6;
        *(undefined8 *)(lVar6 + 0x18) = 0x160;
        *(undefined8 *)(lVar6 + 0x20) = 8;
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        lVar5 = *plVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        *plVar11 = lVar6;
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
} // [自动静态注释] 作用域/控制流边界


