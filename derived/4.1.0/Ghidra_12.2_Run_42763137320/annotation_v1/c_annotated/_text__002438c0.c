/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001438C0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002438c0; name: FUN_.text__002438c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002438c0(long param_1,undefined4 param_2,undefined4 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *local_180; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *local_178; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *local_170; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *local_168; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lStack_160; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_158; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_110; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_108; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_100; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_f8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *local_f0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *local_e8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *local_e0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *local_d8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long alStack_d0 [12]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_6c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_180 = (code *)0xae55050415d68330; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar11 = FUN__text__0012cdb0(param_1 + 0x110,&local_180); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_6c = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x718) = 0;
  iVar10 = FUN__text__003239e0(param_1 + 0x6d8); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (iVar10 == 0) { // [自动静态注释] 条件判断/分支
    uVar13 = *(uint *)(param_1 + 0x6e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    iVar15 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar12 = FUN__text__00323c30(iVar15,param_1 + 0x6d8); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar13 = *(uint *)(param_1 + 0x6e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar13 < 2) { // [自动静态注释] 条件判断/分支
        if (*(int *)(lVar12 + 0x2c) - 0xdU < 0xfffffffe) { // [自动静态注释] 条件判断/分支
LAB__text__00243934: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar4 = *(uint *)(param_1 + 0x718); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(uint *)(param_1 + 0x718) = uVar4 + 1;
          *(int *)(param_1 + (ulong)uVar4 * 4 + 0x71c) = iVar15;
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      else if ((uVar13 == 2) && (*(int *)(lVar12 + 0x2c) - 0xbU < 2)) goto LAB__text__00243934; // [自动静态注释] 条件判断/分支
      iVar15 = iVar15 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (iVar10 != iVar15); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = *(uint *)(param_1 + 0x718); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_180 = *(code **)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_6c = uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar13 == 0) { // [自动静态注释] 条件判断/分支
    local_6c = uVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(uint *)(param_1 + 0x6ec) = uVar4;
  lVar12 = FUN__text__00246350(&local_f0,local_180,&local_6c,&local_180); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar12 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x640) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0x640) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 0x640) = lVar12;
  if (0 < (int)uVar4) { // [自动静态注释] 条件判断/分支
    uVar16 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar13 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar16 = uVar16 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      while( true ) { // [自动静态注释] 循环/迭代
        lVar12 = *(long *)(param_1 + 0x640); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_f0._0_5_ = (uint5)uVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar1 = (undefined8 *)(*(long *)(lVar12 + 0xe0) + *(long *)(lVar12 + 0xe8) * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(long *)(lVar12 + 0xe8) == *(long *)(lVar12 + 0xf0)) break; // [自动静态注释] 条件判断/分支
        if (*(long *)(uVar16 + 0x98) == 0x10) goto LAB__text__00243e44; // [自动静态注释] 条件判断/分支
        *(undefined8 *)(uVar16 + *(long *)(uVar16 + 0x98) * 8 + 0x18) =
             *(undefined8 *)(lVar12 + 0xa0);
        *(long *)(uVar16 + 0x98) = *(long *)(uVar16 + 0x98) + 1;
        *puVar1 = local_f0;
        *(long *)(uVar16 + 0x98) = *(long *)(uVar16 + 0x98) + -1;
        *(long *)(lVar12 + 0xe8) = *(long *)(lVar12 + 0xe8) + 1;
        uVar13 = uVar13 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (uVar4 == uVar13) goto LAB__text__00243aa4; // [自动静态注释] 条件判断/分支
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__00180c38(&local_180,lVar12 + 0xa0,puVar1,1,&local_f0); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar13 = uVar13 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar4 != uVar13); // [自动静态注释] 循环/迭代
LAB__text__00243aa4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar12 = *(long *)(param_1 + 0x640); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  local_48 = *(ulong *)(lVar12 + 0xe0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = *(long *)(lVar12 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_f0 = FUN__text__002464bc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_e8 = FUN__text__00246784; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_180 = FUN__text__002464bc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_178 = FUN__text__00246784; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68 = local_48 + lVar3 * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar12 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
    lVar12 = LZCOUNT(lVar3) * -2 + 0x7e; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  local_e0 = &LAB__text__00246788; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_d8 = &LAB__text__00246794; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_168 = &LAB__text__00246794; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_170 = &LAB__text__00246788; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lStack_160 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  alStack_d0[0] = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__002467a0(&local_48,&local_68,&local_180,lVar12,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  pcVar14 = local_178; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_178 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    local_170 = (undefined1 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_168 = (undefined1 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_180 = (code *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_178 = (code *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*pcVar14)(&lStack_160); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (*(int *)(param_1 + 0x6e8) == 0) { // [自动静态注释] 条件判断/分支
    lVar12 = *(long *)(param_1 + 0x640); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_48 = CONCAT44((int)(local_48 >> 0x20),*(undefined4 *)(param_1 + 0x6ec)) & // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
               0xffffff00ffffffff; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar2 = (ulong *)(*(long *)(lVar12 + 0xe0) + *(long *)(lVar12 + 0xe8) * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(lVar12 + 0xe8) == *(long *)(lVar12 + 0xf0)) { // [自动静态注释] 条件判断/分支
      FUN__text__00180c38(&local_180,lVar12 + 0xa0,puVar2,1,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
      local_f8 = *(long *)(param_1 + 0x640); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto joined_r0x00243bb4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    uVar16 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar16 = uVar16 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar16 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
LAB__text__00243e44: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(uVar16 + *(long *)(uVar16 + 0x98) * 8 + 0x18) = *(undefined8 *)(lVar12 + 0xa0);
    *(long *)(uVar16 + 0x98) = *(long *)(uVar16 + 0x98) + 1;
    *puVar2 = local_48;
    *(long *)(uVar16 + 0x98) = *(long *)(uVar16 + 0x98) + -1;
    *(long *)(lVar12 + 0xe8) = *(long *)(lVar12 + 0xe8) + 1;
  } // [自动静态注释] 作用域/控制流边界
  local_f8 = *(long *)(param_1 + 0x640); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
joined_r0x00243bb4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (local_f8 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_f8 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__003b1808(lVar11,&local_f8); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_f8 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_f8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  pcVar14 = local_e8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_e8 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    local_e0 = (undefined1 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_d8 = (undefined1 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_f0 = (code *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_e8 = (code *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*pcVar14)(alStack_d0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  pcVar14 = *(code **)(lVar11 + 200); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar14 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(lVar11 + 0xd0) = 0;
    *(undefined8 *)(lVar11 + 0xd8) = 0;
    *(undefined8 *)(lVar11 + 0xc0) = 0;
    *(undefined8 *)(lVar11 + 200) = 0;
    (*pcVar14)(lVar11 + 0xe0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar7 = _DAT_008a1b50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = _DAT_008a1b48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = _DAT_008a1b40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(lVar11 + 0xf0) = 0;
  uVar9 = _DAT_008a1b60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = _DAT_008a1b58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar11 + 0xe0) = param_1;
  *(undefined8 *)(lVar11 + 0xe8) = uVar5;
  pcVar14 = *(code **)(lVar11 + 0x248); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(lVar11 + 0xc0) = uVar6;
  *(undefined8 *)(lVar11 + 200) = uVar7;
  *(undefined8 *)(lVar11 + 0xd0) = uVar8;
  *(undefined8 *)(lVar11 + 0xd8) = uVar9;
  if (pcVar14 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(lVar11 + 0x250) = 0;
    *(undefined8 *)(lVar11 + 600) = 0;
    *(undefined8 *)(lVar11 + 0x240) = 0;
    *(undefined8 *)(lVar11 + 0x248) = 0;
    (*pcVar14)(lVar11 + 0x260); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(lVar11 + 0x260) = param_1;
  uVar5 = _DAT_008a1b68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(lVar11 + 0x270) = 0;
  *(undefined8 *)(lVar11 + 0x240) = uVar6;
  *(undefined8 *)(lVar11 + 0x248) = uVar7;
  *(undefined8 *)(lVar11 + 0x250) = uVar8;
  *(undefined8 *)(lVar11 + 600) = uVar9;
  *(undefined8 *)(lVar11 + 0x268) = uVar5;
  pcVar14 = *(code **)(lVar11 + 0x1c8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar14 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(lVar11 + 0x1d0) = 0;
    *(undefined8 *)(lVar11 + 0x1d8) = 0;
    *(undefined8 *)(lVar11 + 0x1c0) = 0;
    *(undefined8 *)(lVar11 + 0x1c8) = 0;
    (*pcVar14)(lVar11 + 0x1e0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(lVar11 + 0x1f0) = 0;
  uVar5 = _DAT_008a1b70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(lVar11 + 0x1c0) = uVar6;
  *(undefined8 *)(lVar11 + 0x1c8) = uVar7;
  *(undefined2 *)(lVar11 + 0x852) = 0x100;
  *(undefined8 *)(lVar11 + 0x1d0) = uVar8;
  *(undefined8 *)(lVar11 + 0x1d8) = uVar9;
  *(long *)(lVar11 + 0x1e0) = param_1;
  *(undefined8 *)(lVar11 + 0x1e8) = uVar5;
  pcVar14 = *(code **)(lVar11 + 0x5c8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar14 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(lVar11 + 0x5d0) = 0;
    *(undefined8 *)(lVar11 + 0x5d8) = 0;
    *(undefined8 *)(lVar11 + 0x5c0) = 0;
    *(undefined8 *)(lVar11 + 0x5c8) = 0;
    (*pcVar14)(lVar11 + 0x5e0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar5 = _DAT_008a1b78; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar11 + 0x5e0) = param_1;
  uVar6 = _DAT_008a1b80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(lVar11 + 0x5f0) = 0;
  uVar8 = _DAT_008a1b90; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = _DAT_008a1b88; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(lVar11 + 0x5e8) = uVar5;
  *(undefined8 *)(lVar11 + 0x5c0) = uVar6;
  *(undefined8 *)(lVar11 + 0x5c8) = uVar7;
  *(undefined8 *)(lVar11 + 0x5d0) = uVar8;
  *(undefined8 *)(lVar11 + 0x5d8) = _DAT_008a1b98;
  FUN__text__003b17ec(lVar11,param_2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003b17f8(lVar11,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(int *)(param_1 + 0x708) == 0) { // [自动静态注释] 条件判断/分支
    local_180 = (code *)0x1aaf9f0537083c3b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar12 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_180); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 1;
  } // [自动静态注释] 作用域/控制流边界
  memcpy(&local_180,(void *)(lVar11 + 0x6c0),0x88); // [自动静态注释] 内存复制、清零或移动
  local_158 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_100 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_168 = (undefined1 *)0xc2f4000043eb0000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lStack_160 = 0x4427000044540000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_110 = 0xc2f40000445bc000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_108 = 0x442c000042380000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__003ad1c8(lVar11,&local_180); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003ad2d0(lVar11,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_180 = (code *)0x167d91046464dafd; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar11 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_180); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar11 + 0x58) =
       *(byte *)(lVar11 + 0x58) & 0xfe | *(int *)(*(long *)(param_1 + 0x640) + 0xf0) == 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


