/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00200180
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00300180; name: FUN_.text__00300180
 */


void FUN__text__00300180(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar7 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = uVar7 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar7 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  plVar6 = *(long **)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x18) = plVar6;
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
  lVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,0xb0,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar4 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar6 + 0xb8))(plVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__003062f4(lVar4,plVar6,0,0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long **)(lVar4 + 8) = plVar6;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 0xb0;
  *(undefined8 *)(lVar4 + 0x20) = 8;
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
  plVar6 = (long *)(lVar4 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(*plVar6 + 0x10))(plVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar9 = (undefined8 *)(param_1 + 0x2f0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    lVar10 = 0x1e; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar11 = puVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(plVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__005fc068(puVar11 + -0x53,*(undefined8 *)(lVar4 + 0x58)); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar5 = *(undefined8 *)(lVar4 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar11 = *(undefined8 *)(lVar4 + 0x60);
      puVar11[1] = uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar1 = *(undefined8 *)(lVar4 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = *(undefined8 *)(lVar4 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = *(undefined8 *)(lVar4 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar11[4] = *(undefined8 *)(lVar4 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar11[5] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar11[2] = uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar11[3] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar1 = *(undefined8 *)(lVar4 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = *(undefined8 *)(lVar4 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = *(undefined8 *)(lVar4 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar11[8] = *(undefined8 *)(lVar4 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar11[9] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar11[6] = uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar11[7] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = FUN__text__003065f8(lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined4 *)(puVar11 + 10) = uVar3;
      uVar5 = FUN__text__00637404(*(undefined8 *)(lVar4 + 0x58)); // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar11[0xb] = uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(plVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      puVar11[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar11[9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar10 = lVar10 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined1 *)(puVar11 + 0xc) = 0;
      *(undefined8 *)((long)puVar11 + 100) = 0;
      *(undefined8 *)((long)puVar11 + 0x6c) = 0;
      *(undefined8 *)((long)puVar11 + 0x74) = 0;
      *(undefined8 *)((long)puVar11 + 0x7c) = 0;
      *(undefined8 *)((long)puVar11 + 0x84) = 0;
      *(undefined8 *)((long)puVar11 + 0x8c) = 0;
      *(undefined4 *)((long)puVar11 + 0x94) = 0;
      puVar11[6] = 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar11[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar11[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar11[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar11[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar11[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar11 = 0;
      puVar11[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar11 = puVar11 + 0x66; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar10 != 0); // [自动静态注释] 循环/迭代
    lVar8 = lVar8 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar9 = puVar9 + 0xbf4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (lVar8 != 300); // [自动静态注释] 循环/迭代
  memset((void *)(param_1 + 0x700fe0),0,0x2028); // [自动静态注释] 内存复制、清零或移动
                    /* WARNING: Could not recover jumptable at 0x00300364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


